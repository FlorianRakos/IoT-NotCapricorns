Answer (and guide me) the following questions during
demonstration (→ portfolio):
– You already know how to install IoTempower through a pi image –
what other ways of using/installing it are there?

– Where and what are the tools/commands/scripts?
there is documentation for the commands in the command reference and scrips in the tool support (scripts that you can put in the command line)

– Where is documentation?
a git si anem a doc ens dona info de l’instal·lació
A node-help hi ha els command que trobariem a els commands del gateway crec
a example no hi ha la documentació de tot pero si q hi ha minim un exemple de tots els devices que suporta el iotempire

– What is the role of the different folders in lib/node_types?
Per el q entenc a cada carpeta hi ha les seves coses q necessita cada xip. Tipo carpetes i documents q fan funcionar-lo.
there are base links pointing to different directories
there is this directory and then other directories pointing to this directory (inheritance design)

we skip ns q provided

what does the topic name work?

Cristina
Which topic needs to be called with what to
switch on the coffee machine?
kitchen/coffee-machine/switch/set/on
the set is there because it is an output
set all lights in living room to blue?
living_room/leds#/rgb/set/blue
living_room/leds1+leds2/rgb/set/blue

living_room/led1/rgb/set 0000FF
living_room/led2/rgb/set 0000FF
turn the main power off?
main/switch/set/off

What is the general rule for forming topics in IoTempower?
Hierarchy
system - folders - device name - device subtopics

When does it make sense to change something in system.conf?
We have a different wifi, manage other systems form your computer
access point, wifi, 
iotempower/iot/iotempower.conf.wxample: all the things you can do

What role does the location of system.conf play? (What if it would be one level higher and there is also yourhouse?)
it only affects this house system conf. If it was a level higher, it would affect other houses too


What needs to/can go into node.conf?
everything in the iotepire.conf can go into node.conf
in the node.conf can go all the configuration for a single node of a IoTempower system. We understand every network node or thing of the internet as a node.
Several devices (actors and sensors) can be connected to one node.

How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compliling? Give examples for when to change which.
it sets in the iotempower.cong, then overwrites in the system.conf, then overwrites in the node.conf (no ho overwrites all, tenen variables differents aixi que nomes copien trossos)
set or override environment variables, system settings, and application parameters. These files can greatly influence the behavior of the software or firmware that is being compiled or executed.
config.txt (Optional): modify this file when you have global settings that affect the entire system or multiple components.
iotempower.conf: modify this file when you're dealing with IoT-specific configurations, especially those that influence how your device connects or interacts with other devices.
system.conf: modify this file when you need to adjust system-level settings or behaviors.
node.conf: modify this when you're adjusting settings for specific devices or nodes in your IoT setup.

what type of deploy we have used
deploy serial/cereal
deploy by cable
when we do deploy we need to connect to the power

why only one deploy can run at once?
because parallel deployment is hard and it crashes

FILTERS video
– What is a common problem when we measure?
to reduce the number of values that are sent, to reduce traffic on the network
you can do a little computation on the device so you don’t have to do it in node-red.

– How can we do graphs in node-red?
Al edit chart node, pots modificar els parametres i et dona el gràfic al fer el deploy.

– What are filters and how do they work (in Node-Red and IoTempower)?
In Node-red you have different nodes in IoT you have chains me peldi

Filters are often implemented using "Function" nodes or specialized nodes like "Switch" and "Change." Filters allow you to manipulate, transform, and control the flow of data as it moves through your Node-Red flows.
Tambe poden convertir floating points de dades en dades binaries.

– What is offered and what other generic filters would be nice?
Binarize, jmc_interval_median,
– What is the “fluent” style?
having objects me peldi again rt. algo de Putting everything in one line.

We also adapted the stories we made last week (link) to the iot project we will do (link)
