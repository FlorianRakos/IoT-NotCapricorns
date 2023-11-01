### Day 1 of IoT volker
example of cloud to cloud communication hue and alexa communication.


<br><br><img src="/Gift/PicturesGift/volkerday1/volkerpic1.png" width="1000"><br><br>


### Task: Analyze your IoT scenarios for vulnerabilities(Identifying security risks)
which security vulnerabilities did you encounter in your IoT scenarios???
>The broker can be easily accessed
>Physical access
>Data Privacy Concerns: Improper handling and storage of sensitive data by IoT devices can lead to privacy breaches.

which measures can be taken to close vulnerabilities??
Encryption:
Enable TLS/SSL for encrypting data in transit between MQTT clients and brokers.
Use secure cryptographic algorithms and key management practices.
Device Management:
Implement a robust device management system to track and monitor the status of all devices.
Remove or revoke access for lost or compromised devices promptly.
Secure Boot and Hardware:
Implement secure boot processes to ensure that only trusted firmware can run on devices.
Use hardware security modules (HSMs) to safeguard cryptographic keys.
Access Control:
Apply the principle of least privilege, granting only the necessary permissions to devices and users.
Regularly review and update access control policies
Privacy Protection:
Be mindful of the data you collect and store from IoT devices.
Implement data encryption to protect user privacy.

### symmetric Encryption
<br><br><img src="/Gift/PicturesGift/volkerday1/volkerpic2.png "width="1000"><br><br>



Symmetric encryption is a type of encryption where only one key (a secret key) is used to both encrypt and decrypt electronic data. 
### Asymmetric Encryption:
<br><br><img src="/Gift/PicturesGift/volkerday1/volkerpic3.png"width="1000"><br><br>


different on each side; the sender and the recipient use two different keys.

SECURE SOCKET LAYER /TRASNPORT LAYER SECURITY
SSL/TLS

SSL/TLS supports both,symmetric and asymetric encryption.
and uses certificate for authentication and encryption
A certificate contains
>a public key .

### what is a cipher suit?
A cipher suite is a set of cryptographic algorithms and protocols used to secure internet communication, including encryption, authentication, and key exchange methods. It's a fundamental part of SSL/TLS protocols

### what is a chain trust?
chain of trust, also known as a trust chain or trust hierarchy, is a concept in cybersecurity and cryptography that involves a series of entities or components that vouch for the authenticity and integrity of each other in a sequential manner. It's a fundamental concept in ensuring the security and trustworthiness of various digital processes, such as secure communication, software verification, and certificate validation.

### What is the root certificate authority (CA)?
A Root Certificate Authority (CA) is the highest level of trust in a system that issues digital certificates for secure communication. It issues self-signed certificates and is highly trusted by web browsers and operating systems. Root CAs serve as the foundation of trust for secure connections.
What is an intermediate certificate authority (ICA)?
An Intermediate Certificate Authority (ICA) is a trusted entity that sits below the Root CA and issues certificates to end entities, like websites. ICAs are used to manage certificates in a more organized manner while maintaining trust in the certificate chain.
### What is an end-user certificate?
An end-user certificate, also known as an end-entity certificate, is a digital certificate issued to an individual, organization or server. It's used to establish the identity and encryption of a specific entity, like a website, email server, or individual user, in secure digital communications.
What topological structure of certificates is created by a CA?
A Certificate Authority (CA) creates a hierarchical or tree-like topological structure of certificates in a Public Key Infrastructure (PKI). This structure consists of:
Root Certificate Authority (Root CA): At the top of the hierarchy is the self-signed certificate of the Root CA. This is the most trusted certificate and serves as the trust anchor for the entire PKI.

### What is the depth of a certificate?
The depth of a certificate in the context of a certificate chain, often referred to as the "certificate chain depth," indicates how many certificates need to be traversed from the end-entity certificate to reach the root certificate authority (Root CA) in a Public Key Infrastructure (PKI) hierarchy. Each certificate in the chain, including the end-entity certificate, intermediate certificates, and the root certificate, adds to the depth.
For example, in a typical SSL/TLS certificate chain:
The end-entity certificate has a depth of 0.
An intermediate certificate signed by the root CA has a depth of 1.
Another intermediate certificate (if present) would have a depth of 2.

### How are Diffie-hellMan key exchange and SSL related?
TLS, which is a protocol that is used to secure much of the internet, can use the Diffie-Hellman exchange in three different ways: anonymous, static and ephemeral

Diffie-Hellman is a key agreement protocol, meaning that if two parties (say, the SSL client and the SSL server) run this protocol, they end up with a shared secret Key. However, neither client or server gets to choose the value of K; from their points of view, K looks randomly generated.
RSA can be used for services such as digital signatures, key exchanges and for encryption purposes.
 How are RSA key exchange and SSL/TLS related/
RSA key exchange in SSL/TLS is used for securely exchanging keys and authenticating the server. It relies on RSA's public key encryption to establish a secure session key for data encryption.

you need 3 files to secure your web

Tasks (individually): Explore how one can . . .
make notes in your personal portfolio!
access the WEB interface of OpenWRT.
i was able to do that.


discover the symbolic host name of the lan interface address.
ssh into the router using the IP address or the symbolic host name and execute shell commands.
sftp into the router and upload/download files to and from it.
install new packages on the router using either
the WEB interface
or the opkg command line utility
??? where are the remote package repositories configured?
The remote package repositories, from which packages are downloaded and installed, are configured in the OpenWRT router's package management system



