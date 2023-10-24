## Update on the “nice-to-have feature-list”
  * Unified framework: Not have to use that many different programs
  * More documentation and context on the tasks
  * Specific hardware for our projects
  * Specific tasks that help us directly with the project
  * Freedom to do the portfolio wherever we want and present it in pdf. It’s hard to do it in Git

## IoTempower
### You already know how to install IoTempower through a pi image, what other ways of using/installing it are there?
### Where and what are the tools/commands/scripts?
There is documentation for the commands in the command reference and scrips in the tool support (scripts that you can put in the command line)

### Where is documentation?
Git > IoTempower > doc

### What is the role of the different folders in lib/node_types?
There are base links pointing to different directories. There is this directory and then other directories pointing to this directory (inheritance design)

## System in folders
### Which topic needs to be called with what to 
### * switch on the coffee machine?
kitchen/coffee-machine/switch/set/on
the set is there because it is an output
### * set all lights in living room to blue?
living_room/leds#/rgb/set/blue
living_room/leds1+leds2/rgb/set/blue
### * turn the main power off?
main/switch/set/off

### What is the general rule for forming topics in IoTempower?
Hierarchy
system - folders - device name - device subtopics

### When does it make sense to change something in system.conf?
When we have a different wifi, to manage other systems form your computer, access point.
If we go to iotempower/iot/iotempower.conf.example we can see all the things we can do there.

### What role does the location of system.conf play? (What if it would be one level higher and there is also yourhouse?)
It only affects this house system conf. If it was a level higher, it would affect other houses too.

## Nodes
### What needs to/can go into node.conf?
Everything in the iotepire.conf can go into node.conf
In the node.conf can go all the configuration for a single node of a IoTempower system. We understand every network node or thing of the internet as a node.
Several devices (actors and sensors) can be connected to one node.

### How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compliling? Give examples for when to change which.
Set or override environment variables, system settings, and application parameters. These files can greatly influence the behavior of the software or firmware that is being compiled or executed.
* config.txt: modify this file when you have global settings that affect the entire system or multiple components.
* iotempower.conf: modify this file when you're dealing with IoT-specific configurations, especially those that influence how your device connects or interacts with other devices.
* system.conf: modify this file when you need to adjust system-level settings or behaviors.
* node.conf: modify this when you're adjusting settings for specific devices or nodes in your IoT setup.

## Compilation
### What are the steps IoTempower executes, when you call deploy in a node-folder (or room or system folder)? What types of deploy are there?
Deploy serial
Deploy by cable
When we do deploy we need to connect to the power

### Why can only one deploy run at once?
Because parallel deployment is hard and it crashes

## FILTERS video
### What is a common problem when we measure?
To reduce the number of values that are sent, to reduce traffic on the network
You can do a little computation on the device so you don’t have to do it in node-red.

### How can we do graphs in node-red?
In edit chart node, we can modify the parameters and we can see the graphic when we deploy.

### What are filters and how do they work (in Node-Red and IoTempower)?
In Node-red you have different nodes in IoT we use chains
Filters are often implemented using "Function" nodes or specialized nodes like "Switch" and "Change." Filters allow you to manipulate, transform, and control the flow of data as it moves through your Node-Red flows.

### What is offered and what other generic filters would be nice?
Binarize, jmc_interval_median.

### What is the “fluent” style?
Puttung everything in one line when we can, non repetitive code, or cahining methods.

## Stories
We also adapted the stories we made last week (link) to the iot project we will do. Here is the update.
