# Pipeline-ESP32
El objetivo de este proyecto es crear un Pipeline DevOps para dispositivos de Internet de las Cosas (Internet of Things, IoT), en este caso un microcontrolador ESP32. El objetivo principal es tener un workflow con una serie de acciones que se desencadenan cuando se pushean cambios en la carpeta de codigo fuente del repositorio.

## Para Comenzar
### Fork Repository
Lo primero que se necesita es forkear este repositorio en su cuenta de GitHub, porque necesitará un access token para darle permisos al runner.

![Fork](/img/GithubFork.jpg)

Una vez listo el fork, clone el repositorio, preferentemente usando SSH.

### Docker Compose
El próximo paso es intalar Docker Compose. Se recomienda ampliamente usar Linux, aunque se puede usar Windows. En distribuciones basadas en Ubuntu se puede instalar con el comando:
```
sudo apt install docker-compose
```
Para Windows (u otro SO) por favor diríjase a [Docker Documentation](https://docs.docker.com/desktop/windows/install).

### Credenciales
Por motivos de seguridad debe crear un GitHub Access Token, el cual le da permisos sobre su cuenta de GutHub para permitir que un self-hosted runner pueda ejecutar las tareas (jobs) del pipeline.
Cree un archivo llamado ".env" en la carpeta raíz de su repositorio. Nótese que este archivo está incluido en el .gitignore, ya que sus credenciales no se deben compartir. En este archivo debe agregar:
```
RUNNER_REPOSITORY_URL=URL of your Forked Repository
GITHUB_ACCESS_TOKEN=Your Token
```
To create a new GitHub Access Token, go to Settings, Developer Settings (at the bottom), Personal Access Tokens, and click on **Generate new token**. You will get a long sequence of characters, copy it and paste it on the .env file as indicated before. You won't be able to retrieve this token, so if you lose your .env file and need the token again, you will need to create a new one and replace it.

![DevSettings](/img/GithubDevSettings.jpg)

### ESP32 USB Connection
To upload code to the ESP32 board consider:
- If you are using Windows or a virtual machine, it is needed to press the BOOT button whilst the program is being uploaded, otherwise the system will have an error telling you the board is not in flash mode.
- It is highly recommended to use Linux, you don't need to press the button, but it is needed to give write permissions to the USB port, preferably the USB 0.
- To give permissions to the USB ports: (Reboot needed)
```
sudo usermod -a -G dialout $USER
```

### Self-Hosted Containerized Runner
A Runner is a server which runs the actions (or jobs) included in the workflow of this repository, found in **.github/workflows** folder. A self-hosted runner means it will run on your computer, containerized because we will use a Docker container to keep all the dependencies as simple as possible.
To start the runner, open a terminal on the root of the repository and run this command:
```
sudo docker-compose up
```
The initialization of the container will take about 4 minutes. In case of a misconfiguration with the access token, the runner will tell you there is an error with the GitHub authentication.

## Workflow
To trigger the workflow you need to push changes in the **/src** folder. Our recommendation is to change only the LED blink frequency, and keep the code as it is. Change the define DELAY in line 7 of **/src/main.c** to a noticeable value you can distinguish in the LED on the board. For example, toggle between 200 and 2000 ms of DELAY. After pushing the changes, the code will compile, test and upload to the board automatically. This is the advantage of DevOps, saving time and being less error prone.

## References
- [Docker](https://www.docker.com)
- [PlatformIO](https://platformio.org)
