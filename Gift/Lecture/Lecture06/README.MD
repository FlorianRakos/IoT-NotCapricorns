
### What is a nice to have feature-list for an iot framework?
Device Management: Streamlined device onboarding, provisioning, and remote management.
Scalability: Ability to support a growing number of devices and data points.
Security: Robust security measures, including authentication, encryption, and access control.
Real-time Data Processing: The capability to process and act on data in real-time.
Improved scalability
 in terms of both hardware and software, making it easier to add new devices or expand the infrastructure without major disruptions.
Enhanced security
 measures as scaling up often increases the attack surface. Better security practices and mechanisms should be in place.
Improved interoperability and standardization 
to ensure that devices from different manufacturers can work seamlessly together in larger systems.
Cost Management:
Resource monitoring and cost optimization tools.
Pay-as-you-go pricing models.
Device Management:
Device onboarding and provisioning.
Remote device configuration.
Firmware and software updates.
Device health monitoring and diagnostics.

### switch on the coffee machine?
/kitchen/coffe-machine/switch/set on

### set all lights in living room to blue?
/living-room/+/rgb/set blue

### turn the main power off?
/main/switch/set off

#### When does it make sense to change something in system.conf?
You can set seperate MQTT host and the gateway.
You can also bridge to another MQTT server.

#### What role does the location of system.conf play? (What if it would be one level higher and there is also yourhouse?)
The system.conf serves as the foundational structure for all topics. To specify a particular topic, you need to prepend "yourhouse" to the start of each topic.

#### What needs to/can go into node.conf?
The microcontroller being used. 
Everything in the node.conf can go in the other .conf like the system.conf and the iotempower.conf.

#### How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling? Give examples for when to change which.

As a bas you have the iotempower.conf, which can be overridden with the system.conf, which can once again be overridden by the node.conf. The node.conf is the last in the hirarchy and overrides all other configurations. 
You can change them for example if a node needs a different wifi than all other nodes.

### Filters

####  What is a common problem when we measure?
We can get a lot of measured values which can introduce a lot of traffic on the network, which we can reduce with filtering on the device. The coputational load can also be on the device and therby make it easier for node red.


#### Real-Time Graph in Node-RED
You can use the chart and gauge nodes. In the gauge you define the range of values, and in the chart for how much time it should capure the data. With a dely node you can limit the amount of value you get every second.

#### – What are filters and how do they work (in Node-Red and IoTempower)?
In IoTempower there are generic filters you can programmm yourself. There are also predefined filters like filter_average, filter_jmc_median (which is a running median). There we can set an interval for which we want to calculate the median like 100ms. Theres also a binarize filter which defines a cutoff with a high and a low. This will then output two different values like "dry" and "wet".
In Node-Red basically the same things can be done with different nodes which feed into each other.

#### – What is offered and what other generic filters would be nice?
We don't really need filters as we propably wont use many measuring devices.

#### – What is the “fluent” style?
Having objects and adding parameters afterwards with "." - notation.

### What is the “fluent interface”?
IoT technology involves various functions and devices for collecting, processing, and transmitting data from the physical world to digital systems. Common functions include data collection, communication, processing, remote control, monitoring, and security.

### Which functions need to be overwritten?
 you create functions to collect data, process it, communicate, control devices, monitor, ensure security, integrate with the cloud, manage user interfaces, devices, and handle errors as needed for your specific IoT application.
### What is a Subdevice (look at output for example)?

### What other generic filters would be nice?
Data Quality Filters: Identifying and handling erroneous or inconsistent data for improved accuracy.
Time-Based Filters: To aggregate or analyze data over specific time intervals, enabling trends and patterns detection.
