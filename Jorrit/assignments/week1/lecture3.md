# Lecture 3

## IoT architecture
> Research IoT architecture in respect to
> - Internet
> - Server
> - Cloud (-computing)
> - Edge (-computing)
> - Fog (-computing)
> - Swarm
> - Things
> - Gateway
> - Nodes
>
> How are these concepts related/connected – what is the same (group them and interrelate/connect/associate the
> groups → maybe draw small architecture sketch)?

I once again decided to rely on my existing knowledge as opposed to googling anything.
I found that the only way I could really express my idea was to [draw it](/Jorrit/assignments/week1/20231017_123123.jpg).

The *internet* is a global network using TCP/IP. In my head one of the most important parts is DNS routing, so I decided to draw that.
*Servers* are computers that act as infrastructure, they are generally connected to the internet. It can be used to store or process data, which is called *cloud computing*.
I didn't know what *edge* and *fog computing* are. Apparently it's just moving the device using cloud computing and those cloud computing resources closer together. I'm probably being overly reductive, but I have a strong sense this is the kind of term I will completely forget about in a week.
I thought a *swarm* was necessarily a cluster of cloud computing resources (à la Docker swarm or kubernetes), but according to the teacher it's the group noun for all nodes in a network. I can't seem to find sources agreeing with that, but whatever.
*Things* are as vaguely defined as that word suggests; it just means any device that can share data with another device else, but it can also be a component of a larger thing.
*Gateways* are network nodes that serve as a bridge to an outside connection, often a larger network, such as the internet.
*Nodes* are all connected devices in a network, including the gateway.

## Exchange Formats

> Selection of exchange formats:
> - Text
> - XML (focus on SOAP)
> - JSON
> - YAML
> - Binary (i.e. Python's pickle and CBOR –> maybe relate to JSON)<br />
> ● 5 min on your own:
> - What is especially suitable for IoT systems (where in architecture)? Why?
> - What is especially unsuitable? Why?<br />
> ● In-class discussion

This time it's a mix of my knowledge (in the platonic sense of knowledge) and lightning-fast googling because we did not get much time.

Text is a common exchange format (I think); UART is mostly text-based, as are, MQTT, and HTTP. Text is simple and readable, but not always very efficient.
XML has some convenient features for setting very specific parameters. The problem is that XML was not very friendly; if the format of a piece of data going to an endpoint wasn’t perfectly to spec, then the whole transmission is wasted. The teacher has a particularly strong sense of betrayal because XML was once heavily promoted as a new standard, but then microsoft did a rug-pull (or something).
JSON is one step above text, because it is really just a formatted string of text. It is very convenient format because the formatting is intuitive to humans and machines alike.
Yaml is very similar to JSON, but Yaml supports comments and offers more data types than JSON.
binary formats are the most efficient, but they are not readable for humans
