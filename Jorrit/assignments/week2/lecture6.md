# Lecture 6

[Class Reflections](/Jorrit/reflections/week2/monday.md)

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

> What is/needs to be running in an IoTempower system?
I would like to mention the word dependencies in case it scores me points. Knowing what I know about Linux, the external dependencies can be found somewhere in the installation instructions.
The list I can gather from those is this:
- haveged
- mosquitto
- mosquitto-clients
- virtualenv
- iptables
- bridge-utils
- hostapd
- dnsmasq
- build-essential
- rsync
- nodejs
- npm
- mc
- micro
- tilde

But I also know Linux software can be sneaky and have dependencies it hides in its installation. I don't know how to find these if there are any.

The documentation page for external resources is pretty on-the-nose as a thing worth mentioning.
- `PlatformIO <http://platform.io>`__
- `Node-RED <https://nodered.org>`__
- `mosquitto <https://mosquitto.org/>`__
- `DietPi <https://dietpi.com>`__
- `create_ap <https://github.com/oblique/create_ap>`__ forked for IoTempower
  `here <https://github.com/ulno/create_ap>`__.
- `cloudcmd <https://github.com/coderaiser/cloudcmd>`__
- `FastLed rgb-strip library <https://github.com/FastLED/FastLED>`__,
  unfortunately unstable on ~~teh~~ _the_ esp8266 and now extended by
  `NeoPixelBus <https://github.com/Makuna/NeoPixelBus>`__,
- `rpi-clone <https://github.com/billw2/rpi-clone>`__
- `The Tilde Texteditor <https://os.ghalkes.nl/tilde>`__

> What needs to/can go into node.conf?

Going by the description, just the device(s) on which the code will be running.

> How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling?
> Give examples for when to change which.

I'm feeling lazy but I can literally just quote the files' descriptions:

_Configuration options of iotempower_
_This is specific to this hardware platform and iotempower gateway installation,_
_it can support several system configurations_

You can use this file to configure:
- An access point for wifi sharing
- MQTT Broker

System.conf:
_Configuration for a iotempower system_
_Everything from etc/iotempower.conf can be overwritten here._
_However, you will usually just overwrite the MQTT-Host and maybe wifi access information_

So you'd change it to configure different wi-fi networks and MQTT brokers.

You'd change node.conf to select the device used.

## Compilation / Filters / Driver

I didn't bother to write this portfolio at the time and I simply don't remember these questions now.
