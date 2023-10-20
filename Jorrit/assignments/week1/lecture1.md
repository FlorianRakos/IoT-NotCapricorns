# Lecture 1

## Who are U?
Answer the following questions:

### What type of programming experience do you have?
I have been doing an IT uni course for nearly 4 years. In this time I have worked with Arduinos, ESP32s, STM32s, and more.
I have also worked with platforms such as Node-RED, Platform.io, ESP-IDF, nRF connect, Next.js, and more that I can't currently recall.
In my own time I have done some projects with Google Scripts and I've set up my own home server running Ubuntu. On it I run services such as Nextcloud, Jellyfin, InfluxDB, Keycloak, Portainer, and others.
The languages I'm most familiar with are C, C++, Javascript, C#, and bash.

### What have you done with micro controllers? Which ones have you used?
See above.

### Which single board computers do you know/have you used?
I've used a Raspberry Pi, and iMX6/iMX8, all running embedded linux.

### Who is a maker or part of the maker community? What do you like/would you like about it?
I'm certainly part of the maker community. Fontys has publicly usable facilities like 3d printers, laser cutters, and a giant plotter. I have designed and made many things, I'll include [some photos](/Jorrit/assignments/week1/lecture1pictures/).

### What do you already know about IoT?
Honestly, that's a hard question to answer. Quite a lot, I suppose.

### What are your expectations from this class?
I'm expecting to relearn some IoT basics and to get assistance with building our footmouse.

## IoT Assignment

> what does the Internet of Things Entail?<br />
> use a laptop to find and note down including a small description
>   - 3 domains (later 2 more)
>   - 2 commonly used data protocols
>   - 2 typical devices (later 2 more)<br />
> later:
>   - 3 or more benefits of IoT
>   - 3 or more challenges of IoT
>   - some other noteworthy benefits of IoT


IoT

**domains:**

1. _Smart home:_
    many modern appliances and gadgets have IoT functionality for the sake of convenience and comfort. Think of a thermostat stops heating a house when nobody is home, or a smart lighting system that softens the light level later in the day to aid sleep.

2. _industrial automation:_
    modern factories have very elaborate tracing and processing systems. It automatically registers information about the products it is producing.

3. _wearable tech:_
    wearable tech such as smartwatches and earbuds can make life more convenient or provide a level of health monitoring.

4. _self-driving vehicle:_
    Some vehicles have basic self-driving capabilities. They can be controlled remotely to do basic operations like parking in a tight location.

5. _inventory systems:_
    Different devices and people can keep an online inventory, i.e. a fridge that can tell you what food you are running out of.

**commonly used protocols:**

1. _MQTT:_
    this is a simple message-based communication protocol where different devices can publish and subscribe to a particular topic over an internet connection.

2. _Bluetooth Low Energy:_
    This is a protocol based on Bluetooth, but reduced in complexity to lower computational demand. This enables smaller devices to communicate with larger devices.

**typical devices:**

1. _robot hoover (roomba):_
    This device automatically cleans floors in people’s houses. It communicates with the user to negotiate things like scheduling, activity level, task scope, etcetera.

2. _smart watch:_
    A smart watch connects with a smartphone to allow for certain convenience features, such as finding a misplaced phone or monitoring battery level.

3. _self-driving car:_
    There are cars that have self-driving capabilities. users can connect with these cars and command them to perform certain tasks like parking.

4. _smart thermostat:_
    Smart thermostats behave like regular thermostats, but can be controlled via an internet connection, or even use automated monitoring to improve efficiency.

**Benefits:**

1. _reduce the need for human intervention:_
    automating tasks reduces the need for humans to engage in different tasks, giving them more time and mental energy for other tasks. Having a reliable reminder system is a big relief to the forgetful.

2. _reduce energy consumption of certain processes:_
    By reducing the intensity or activity of certain processes dynamically (i.e. lower thermostat temperature when possible), the energy consumption of these processes can be lowered.

3. _improve comfort level:_
    IoT devices in the home can make life more comfortable. A house with dynamic lighting, temperature, and soundscape can be nicer to live in.

4. _remote control & monitoring:_
    The ability to control and monitor devices remotely adds convenience. You don’t have to worry about leaving the stove on at home if you can see a live temperature display online.

**challenges:**

1. _security:_
    IoT devices are infamous for being vulnerable to outside attack. Protecting devices from security threats is expensive and often a low priority

2. _over-reliance:_
    All software will eventually produce glitches. If a device malfunctions, there is a possibility that it can cause disruptions (i.e., an unresponsive electronic lock).

3. _not always worth investment:_
    Developing an integrated system for an industrial process can be very expensive, especially when including maintenance and security risks. The increase in efficiency isn’t always enough to offset the cost of an IoT application.

4. _need for maintenance:_
    Modern cybersecurity demands frequent updates to address vulnerabilities. This means that devices must be connected to an update infrastructure. These updates also have to be written, which is expensive, especially for older devices that don’t generate any more revenue.

5. _privacy:_
    IoT devices often record sensitive information about people. From looking at someone’s smart lighting activity, someone could probably figure out behavioural patterns like circadian rhythm. This information should not be shared with anyone but the user, but the manufacturer or a hacker could access it without their knowledge.

**noteworthy:**
1. _electro-sensitive people:_
    Whilst there is no sound scientific evidence for it, there are people that claim to be sensitive to electromagnetic fields. Even if only from the nocebo effect, their symptoms are real, and the ubiquity of IoT devices makes life more difficult for these people.
