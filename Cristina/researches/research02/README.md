# Research records 02
1. [Story draft](/Cristina/researches/research02/README.md#story-draft)
2. [Architecture and Terminology of IoT](/Cristina/researches/research02#architecture-and-terminology-of-iot)
3. [Exchange formats](/Cristina/researches/research02#exchange-formats)
   * 3.1 [What is especially suitable for IoT systems (where in architecture)? Why?]([/Cristina/researches/research02#what-is-especially-suitable-for-iot-systems-where-in-architecture-why))
   * 3.2 [What is especially unsuitable? Why?](/Cristina/researches/research02#what-is-especially-unsuitable-why)
4. [IoT Empower Gateway (I)](/Cristina/researches/research02#iot-empower-gateway-i)
   * 4.1 [What are the main steps?](/Cristina/researches/research02#what-are-the-main-steps)
   * 4.2 [What stands out?](/Cristina/researches/research02#what-stands-out)
   * 4.3 [What is the point, why do we need a gateway? What will be the alternatives?](/Cristina/researches/research02#what-is-the-point-why-do-we-need-a-gateway-what-will-be-the-alternatives)
5. [Lab Tasks](/Cristina/researches/research02#lab-tasks)
6. [Reflection of the day](/Cristina/researches/research02#reflection-of-the-day)
   
## Story draft
Click [HERE](/TeamThree/Ulrichs%20Lab%20Tasks.md#3b-stories-and-scenario) to take a look 

## Architecture and Terminology of IoT
  * Internet: The global network infrastructure that allows IoT devices to communicate with each other and with remote servers or services over the web.
  * Server: A centralized computer or system that stores and processes data and manages the communication and interactions between IoT devices.
  * Cloud (Computing): Remote servers and data centers that provide storage, processing, and other services for IoT applications, enabling scalability and accessibility from anywhere.
  * Edge (Computing): Processing and data analysis that occurs close to IoT devices, reducing latency and minimizing data transfer to the cloud.
  * Fog (Computing): An intermediate layer between edge and cloud computing, providing localized processing and decision-making capabilities, particularly useful for time-sensitive applications.
  * Swarm: A network of interconnected IoT devices or agents that work together to accomplish a common goal, often with decentralized decision-making.
  * Things: IoT devices, sensors, and objects that collect and transmit data to enable automation and smart functionality.
  * Gateway: A device that connects IoT devices to the internet or a local network, often serving as a bridge to relay data to servers or the cloud.
  * Nodes: Individual devices or components within an IoT network, including sensors, actuators, and other connected elements.

We drew a [sketch](/Cristina/additionalThings/sketch.jpg) to show how these concepts are related.

## Exchange Formats
Formats: Text, XML, JSON, YAML and Binary

 * Text: Encoding (e.g., UTF-8, ASCII) Parsing Serialization Plain text String Characters
 * XML (eXtensible Markup Language): Elements Attributes Schema XSLT (XML Stylesheet Language Transformations) DOM (Document Object Model) Namespaces Validation XPath DTD (Document Type Definition)
 * JSON (JavaScript Object Notation): Objects Arrays Key-value pairs String Number Boolean Null Parsing Serialization
 * YAML (YAML Ain't Markup Language): Scalars Sequences (lists) Mappings (hashes or dictionaries) Anchors Aliases Indentation Multiline strings Key-value pairs
 * Binary: Byte Bit Binary protocols (e.g., MQTT, CoAP) Serialization Deserialization Endianness (Little-endian, Big-endian)

### What is especially suitable for IoT systems (where in architecture)? Why?
 * JSON: it is widdely supported, but if you want to sent a lot of data in small document it is not the best.
 * YAML: it supports comments and has more data types. It is more readable than YAML. It has some format aspects.
### What is especially unsuitable? Why?
 * Text: they may not be ideal for devices with limited computational capabilities or when efficiency is a priority. 
 * XML: is well structured as you can specify a lot of things that makes comunication easy. Because of the schemas and over especification, there where a lot of incompatibilities.
   
## IoT Empower Gateway (I)
### What are the main steps?
See the steps [HERE](/TeamTwo/exercises/exercise02#potential-steps-and-challenges)

### What stands out?
For me, the infrastucture of the gateway stand out. Aesthetically, it wasn't particulary pretty but I didn't find it ugly either.

### What is the point, why do we need a gateway? What will be the alternatives?
We need it to bridge communication between diverse devices and the cloud, enabling protocol translation, data aggregation, and security. Some alternatives could be direct cloud connectivity, edge computing or cloud-to-cloud integration.

## Lab Tasks
To see the lab tasks press [HERE](/Cristina/LabRecords/LabRecord02.md)

## Reflection of the day
Go to today's [reflection](/Cristina/reflections/reflection02/README.md)
