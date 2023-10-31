# Lecture 6


## generic steps

We did this lecture mostly as a group, which is why I didn't write down answers for myself.

## IoTEmpower

You can install it on Linux or WSL by cloning the git repo.

> What are the tools, commands, and scripts?
The tools are the ~~linux packages from the installation used to perform the functions of the platform~~ _various operations a user can perform to control the platform._ The scripts are the implementations of the tools which can be executed. The commands are the operations one can use in the system files of an application. Commands like led() configure an led which can be controlled in deployment.

> Where are the tools, commands, and scripts?
The tools are not located anywhere, they exist as a valid implementation of the scripts. Their descriptions are in the Tool Support chapter of the documentation. The scripts are located in the /bin folder of the git repo. I can't tell where the commands are located, using the repo search in every iotempire repo bore no results.

I'm probably wrong about these.

> Where is documentation?
/doc directory in the repo.

> What is the role of the different folders in lib/node_types?
It's the different devices supported by the platform.
