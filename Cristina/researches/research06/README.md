# Research records 06
## Index
1. [Generic Steps for adding devices](/Cristina/researches/research06#generic-steps-for-adding-devices)
2. [IoTempower”](/Cristina/researches/research06#iotempower)
   * 2.1 [You already know how to install IoTempower through a pi image, what other ways of using/installing it are there?](/Cristina/researches/research06#you-already-know-how-to-install-iotempower-through-a-pi-image-what-other-ways-of-usinginstalling-it-are-there)
   * 2.2 [What is the role of the different folders in lib/node_types?](/Cristina/researches/research06#what-is-the-role-of-the-different-folders-in-libnode_types)
   * 2.3 [Where and what are the tools/commands/scripts?](/Cristina/researches/research06#where-and-what-are-the-toolscommandsscripts)
   * 2.4 [Where is documentation?](/Cristina/researches/research06#where-is-documentation)
4. [System in folders](/Cristina/researches/research06#system-in-folders)
   * 4.1 [Which topic needs to be called with what to
switch on the coffee machine?](/Cristina/researches/research06#which-topic-needs-to-be-called-with-what-to)
   * 4.2 [set all lights in living room to blue?](/Cristina/researches/research06#set-all-lights-in-living-room-to-blue)
   * 2.3 [turn the main power off?](/Cristina/researches/research06#turn-the-main-power-off)
   * 2.4 [What is the general rule for forming topics in IoTempower?](/Cristina/researches/research06#what-is-the-general-rule-for-forming-topics-in-iotempower)
   * 2.5 [When does it make sense to change something in system.conf?](/Cristina/researches/research06#when-does-it-make-sense-to-change-something-in-systemconf)
   * 2.6 [What role does the location of system.conf play? (What if it would be one level higher and there is also yourhouse?)](/Cristina/researches/research06#what-role-does-the-location-of-systemconf-play-what-if-it-would-be-one-level-higher-and-there-is-also-yourhouse)
3. [Nodes](/Cristina/researches/research06#nodes)
   * 3.1 [What needs to/can go into node.conf?](/Cristina/researches/research06#what-needs-tocan-go-into-nodeconf)
   * 3.2 [How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compliling? Give examples for when to change which](/Cristina/researches/research06#how-do-optional-configtxt-etciotempowerconf-systemconf-and-nodeconf-influence-environment-variables-for-compliling-give-examples-for-when-to-change-which)
4. [Compilation](/Cristina/researches/research06/research06.md#compilation)
   * 4.1 [What are the steps IoTempower executes, when you call deploy in a node-folder (or room or system folder)? What types of deploy are there?](/Cristina/researches/research06#what-are-the-steps-iotempower-executes-when-you-call-deploy-in-a-node-folder-or-room-or-system-folder-what-types-of-deploy-are-there)
   * 4.2 [Why can only one deploy run at once?](/Cristina/researches/research06#why-can-only-one-deploy-run-at-once)
5. [Filters video](/Cristina/researches/research06/research06.md#filters-video)
   * 5.1 [What is a common problem when we measure?](/Cristina/researches/research06#what-is-a-common-problem-when-we-measure)
   * 5.2 [How can we do graphs in node-red?](/Cristina/researches/research06#how-can-we-do-graphs-in-node-red)
   * 5.3 [What are filters and how do they work?](/Cristina/researches/research06#what-are-filters-and-how-do-they-work-in-node-red-and-iotempower)
   * 5.4 [What is offered and what other generic filters would be nice?](/Cristina/researches/research06#what-is-offered-and-what-other-generic-filters-would-be-nice)
   * 5.5 [What is the “fluent” style?](/Cristina/researches/research06#what-is-the-fluent-style)
6. [Update on the “nice-to-have feature-list”](/Cristina/researches/research06#update-on-the-nice-to-have-feature-list)
7. [Stories](/Cristina/researches/research06/research06.md#stories)
8. [Reflection of the day](/Cristina/researches/research06#reflection-of-the-day)

## Generic Steps for adding devices
 * 1- Check Official Documentation: Look for official documentation or user guides provided by the IoTempower platform. These documents typically contain detailed instructions on how to set up and add devices to the platform.
 * 2- Contact Support: If there is no documentation available, consider reaching out to the IoTempower support team. They should be able to provide you with step-by-step instructions or direct assistance.
 * 3- Community Forums or Resources: Search for online community forums, discussion boards, or resources related to IoTempower. Sometimes, users share their experiences and insights on how to add devices.
 * 4- Trial and Error: If you have access to the platform, you might explore its user interface to see if there are intuitive options for adding devices. Often, IoT platforms offer a user-friendly interface for this purpose.
 * 5- IoT Standards: If IoTempower adheres to standard IoT protocols like MQTT or CoAP, you can use standard tools or libraries to add devices. For example, using MQTT, you'd typically publish messages to specific topics to add devices.
 * 6- Consult the Platform Provider: If you are working with a specific organization that provides the IoTempower platform, consider reaching out to their technical team for guidance.

## IoTempower
### You already know how to install IoTempower through a pi image, what other ways of using/installing it are there?
You can install it on Linux or WSL by cloning the git repository

### What is the role of the different folders in lib/node_types?
There are base links pointing to different directories. There is this directory and then other directories pointing to this directory (inheritance design)

### Where and what are the tools/commands/scripts?
There is documentation for the commands in the command reference and scrips in the tool support (scripts that you can put in the command line)

### Where is documentation?
Git > IoTempower > doc

## System in folders 
### Which topic needs to be called with what to 
### switch on the coffee machine?
kitchen/coffee-machine/switch/set/on
the set is there because it is an output
### set all lights in living room to blue?
living_room/leds#/rgb/set/blue
living_room/leds1+leds2/rgb/set/blue
### turn the main power off?
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
Putting everything in one line when we can, non repetitive code, or cahining methods.

## Update on the “nice-to-have feature-list”
  * Unified framework: Not have to use that many different programs
  * More documentation and context on the tasks
  * Specific hardware for our projects
  * Specific tasks that help us directly with the project
  * Freedom to do the portfolio wherever we want and present it in pdf. It’s hard to do it in Git

## Stories
We also adapted the stories we made last week [(link)](/TeamThree#3b-stories-and-scenario) to the iot project we will do. [Here](/TeamThree/README.md#23102023-story-update) is the update.

Go to [Lab Tasks](/Cristina/LabRecords/LabRecord06.md)
## Reflection of the day
Go to today's [reflection](/Cristina/reflections/reflection06/README.md)
