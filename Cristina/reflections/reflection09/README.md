We started the lesson analising our IoT scenario to find vulnerabilities and then figuring out measures that could fix them

Notes from the other groups:
mqtt broker the password is not very secure
Data transfer is not encrypted
node red is badly passworded --> but you can change that

Then we learned about chain trust searching and answering this questions
We did the same with the DH and RSA key exchange

DH key exchange notes:
Even if you listen you can not figure out the data. Only the public key is given. The private key uncryptes the message
The main difference with the two exchanges is that HD uses the same key to encrypt and decrypt, and in RSA the key to encrypt is not the same as the one to decrypt

OpenWrt
I accessed the WEB interface of Open WRT and searche for the symbolic host name of the lan interface address that was OpenWrt
Then I installed opkg update on PuTTY. On the first try the resource was temporarily unavailable because I tried to updated at the same time at Jorrit. When he finished, I tried again and it upgraded correctly.
I created a nano so that the packages get installed in the router. I couldn't figure out how to upload the file named 7646d48820c9bd9d, but I skiped this step and did the next ones and they worked.

Today was a tough day, a lot of new concepts that I had no idea about. ChatGPT was my best friend today because I proceded to ask him everysingle question and I had and concept I didn't know.
I spent a lot of time (3-4 hours) stuck, trying to do the last task and I gave up on one of the steps, because the programm (Putty) wouldn't recognise the command pscp and there was no way on fixing it.
