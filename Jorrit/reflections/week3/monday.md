# Reflections

[Lecture assignments](/Jorrit/assignments/week3/lecture9.md)

## Lecture
I've had lectures on this subject before and they never stick. It's like ip routing. I learn it, but the knowledge doesn't get used at any point so I just forget it. The exception is the key exchange because it blew my mind. Whilst I don't understand the maths, I respect its significance.

## Lab

### OpenWRT

As stated above, IP routing is an achilles' heel of mine.

OpenWRT is not the most intuitive of interfaces I've used, but then it seems that routers always feel the need to have their own personal look.

I couldn't find the symbolic hostname so I asked a classmate, apparently it's under system->system.

Logging into SSH is straightforward, but the user and password hadn't been shared with us so that was another question for the classmate. 10 bonus points for Vincent.

I'd never heard of sfpt before but it's the kind of thing I was confused didn't exist. When I need to manipulate files on my home server I always open VSCode with its remote explorer. I've used FTP before.

I asked ChatGPT but I could not be bothered with doing it via powershell, so I installed WinSCP instead. I tried to connect and it failed because sftp wasn't installed yet. I installed it ```opkg install openssh-sftp-server```, connected, and then I could download a dhcp.leases file and upload a png.

The key upload was simple and adding the link to the file wasn't difficult either. The difficult bit was me forgetting to run ```opkg update``` so I still couldn't find the mqttbroker package.

[I don't write down proof of my work, I have people to do that for me.](/TeamThree/Volkers%20Part.md)

## Opinions
- Volker seems to teach in a more traditional style, which was a bit more difficult for me to pay attention to.
- People are pretty rude about Ulno's teaching and I must say I disagree (not trying to brown-nose, I'm just an opinionated contrarian). Given the time we had and the effort put in by the students, I think we got a lot done. Some of my classmates are motivationally bankrupt and view any difficult challenge as something to avoid.
