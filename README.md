# Pipeline-ESP32
This project is intended to create a DevOps Pipeline for Internet of Things devices, in this case an ESP32 Board. The main objective is to have a workflow with a set of actions to trigger when a repository push includes changes in the source code directory.

## Getting Started
### Fork Repository
To get started you need to fork this repository on your own GitHub account, because you will need to set up an access token for the runner permissions.

![Fork](/img/GithubFork.jpg)


### Docker
Next step is installing Docker Compose. It is highly recommended to use Linux, although you can also use Windows. In Ubuntu based distributions you can install it with the command:
```
sudo apt install docker-compose
```
For Windows (or other OS) please refer to the [Docker Documentation](https://docs.docker.com/desktop/windows/install).

## Referencias
- [PlatformIO](https://platformio.org)