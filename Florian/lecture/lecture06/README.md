
### What is a nice to have feature-list for an iot framework?

A framework should automatically implement security features.
Simplifying the coding process, like in IoTempowere where you only have to define a device and then it would automatically subscribe to MQTT topics like ".../set" to change device states easily.
A framework should implement a logging and monitoring system.


### Generic steps
In IoTempower you have to define topic, pinID and the necessary parameters.


Which topic needs to be called with what
to:

#### ● switch on the coffee machine?
/kitchen/coffe-machine/switch/set on

#### ● set all lights in living room to blue?
/living-room/+/rgb/set 0x0000FF

#### ● turn the main power off?
/main/switch/set off

#### – What is the general rule for forming topics
in IoTempower?
Start at the system.conf, then folders, device names and device topics.

#### – When does it make sense to change something in system.conf?
You can set seperate MQTT host and MQTT gateway.
You can also bridge to another MQTT server.

#### – What role does the location of system.conf play? (What if it would be one level higher and there is also yourhouse?)
System.conf is the root where all the topics are constructed. You would have to add yourhouse to the beginning of each topic.


#### – What needs to/can go into node.conf?
The microcontroller being used. 
Everything in the node.conf can go in the other .conf like the system.conf and the iotempower.conf.

#### – How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling? Give examples for when to change which.

As a bas you have the iotempower.conf, which can be overridden with the system.conf, which can once again be overridden by the node.conf. The node.conf is the last in the hirarchy and overrides all other configurations. 
You can change them for example if a node needs a different wifi than all other nodes.


#### ● Look at the code with peer and answer following questions – 10 minutes→ portfolio:
– What are the steps IoTempower executes, when you call deploy in anode-folder (or room or system folder)? What types of deploy are there?

– Why can only one deploy run at once?
Because it's hard. It can be easily done though if we use different IoTempower gateways.
● If unclear, make me demonstrate.


### Filters

#### – What is a common problem when we measure?
We can get a lot of measured values which can introduce a lot of traffic on the network, which we can reduce with filtering on the device. The coputational load can also be on the device and therby make it easier for node red.

#### – How can we do graphs in node-red?
You can use the chart and gauge nodes. In the gauge you define the range of values, and in the chart for how much time it should capure the data. With a dely node you can limit the amount of value you get every second.

#### – What are filters and how do they work (in Node-Red and IoTempower)?
In IoTempower there are generic filters you can programmm yourself. There are also predefined filters like filter_average, filter_jmc_median (which is a running median). There we can set an interval for which we want to calculate the median like 100ms. Theres also a binarize filter which defines a cutoff with a high and a low. This will then output two different values like "dry" and "wet".
In Node-Red basically the same things can be done with different nodes which feed into each other.

#### – What is offered and what other generic filters would be nice?
We don't really need filters as we propably wont use many measuring devices.

#### – What is the “fluent” style?
Having objects and adding parameters afterwards with "." - notation.
