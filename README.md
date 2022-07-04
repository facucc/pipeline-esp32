# Pipeline-ESP32
This project is intended to create a DevOps Pipeline for Internet of Things devices, in this case an ESP32 Board. The main objective is to have a workflow with a set of actions to trigger when a repository push includes changes in the source code directory.

## Getting Started
### Fork Repository
To get started you need to fork this repository on your own GitHub account, because you will need to set up an access token for the runner permissions.

![Fork](/img/GithubFork.jpg)

Once forked clone the repository, preferably using SSH.

### Docker Compose
Next step is installing Docker Compose. It is highly recommended to use Linux, although you can also use Windows. In Ubuntu based distributions you can install it with the command:
```
sudo apt install docker-compose
```
For Windows (or other OS) please refer to the [Docker Documentation](https://docs.docker.com/desktop/windows/install).

## Credentials
For security reasons you have to set up a GitHub Access Token, which grants you permissions over your GitHub account to allow a self-hosted runner that we will use to run the pipeline jobs.
Create a file called ".env" in your repository root folder. In the file you should add:
```
RUNNER_REPOSITORY_URL=[URL of your Forked Repository]
GITHUB_ACCESS_TOKEN=[Your Token]
```
To create a new GitHub Access Token, go to Settings, Developer Settings, Personal Access Tokens, and click on **Generate new token**. You will get a long sequence of characters, copy it and paste it on the .env file as indicated before. You won't be able to retrieve this token, so if you lose your .env file and need the token again, you will need to create a new one and replace it.

![DevSettings](/img/GithubDevSettings.jpg)

## References
- [Docker](https://www.docker.com)
- [PlatformIO](https://platformio.org)