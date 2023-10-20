# Lecture 5

## scaling and testing
> Think about these questions:
>
> - what will be issues scaling up
> - how can we do testing
> - what would you like to see for scaling up
> - what role will a simulator, mqtt, and stories play

The question here is too vague if you ask me. I’m mentally answering these questions as if we were asked to set up the AC system 100 times.

Scaling up IoT projects like the ones we’ve been building could produce a number of issues:

- lack of hardware
    - We only had a limited supply of hardware, and to expand it we would need a budget
- network bandwidth
    - The Pi already proved insufficient, forcing us to move to a router. If the system would be expanded with more devices, then it might stretch the network too thin. It could be expanded with more routers, but that’s not considered in the current scope.
- response times
    - As an additional problem to a thinly stretched network, the network could slow down. I’m also referring to response times of MQTT messages. If we had 100 temperature sensors sending a temperature every second, then the integrator could only take 10ms to respond per message before it would start to build up a backlog.
- nomenclature/demarcation
    - This could be solved by setting up multiple routers or multiple MQTT topics, but then there has to be a consistent naming system. You’d have to group devices and change the code per group. This kind of complication can lead to increased errors.
- consistency
    - with the best will in the world, my teammates don’t have a complete understanding of the code we’re using. If we had to set up 100 devices then any mistake that has a 1% chance will be almost guaranteed to show up. If you ask me the chance of mistakes is a lot higher than 1%, especially if the code is not identical.


We could do testing in the following ways:

- By placing the devices in a temperature-controlled environment and seeing if they report the right temperature.
- By manipulating the temperature and seeing if there is a response from the devices
- By monitoring the bandwidth of the network

We could make life easier in the following ways:

- standardising the codebase a little, say clearly indicating the difference between device in the code.
- simplifying the cable management and using better cables.
- designing a consistent naming system whereby there is a certain number of devices per group with an assigned set of MQTT topics, network ids, etc.
- If the project was being scaled up to a professional level then you would want the people making the systems to actually understand the underlying technology. In the hypothetical of making a 100 devices that would be a waste of time.
- move to a better platform than Arduino IDE. It’s a decent place to start, but for a larger scale you’d want something better than baby’s first IDE.

Simulators, MQTT, and stories could play the following roles:

- A simulated version of a design provides the benefit of having to make a standardised design in the first place and showing that the system would work in theory.
- Stories can get developers on the same page in terms of use-case and design features.
- stories can help sell the design to 3rd parties (source of budget perhaps)
