
Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures from Volker.
 
## Index
1. [Git and Kit](#1-git-and-kit)
   * [1.a Partner, team git repo setup](#1a-partner-team-git-repo-setup)
   * [1.b The Kit](#1b-the-kit)

## 1. Identify Security Risks 
For the next excercise we need to use our scenario to identify the security risks that can occur.

### 1.a Which security vulnerabilities did you encounter in your IoT scenarious? 
 * Device (footmouse) security and management
 * Lack of monitoring and logging
 * Lack of privacy protections
 * Unauthorized access to cloud storage
 * Insider threats (Roberto or Pieter)

### 1.b Which measures can be taken to close the vulnerabilities?
*Device Security and Management:*
 * Regular Updates: to patch any known vulnerabilities.
 * Secure Boot: to ensure that the device only boots with trusted software.
 * Hardware-based Security: such as Trusted Platform Modules (TPM) or Hardware Security Modules (HSM), for cryptographic      operations and secure key storage.
 * Remote Device Management:  to allow administrators to monitor, update, and manage devices remotely.
 * Device Authentication: Use strong authentication mechanisms to ensure that only authorized devices can connect to the network.
### 1.c Lack of Monitoring and Logging:
 * Enable Logging: Ensure all devices have logging capabilities enabled, capturing all relevant events and anomalies.
 * Centralized Monitoring: Use a centralized monitoring system to aggregate logs from all devices, making it easier to detect anomalies or security breaches.
 * Real-time Alerts: Implement real-time alerting mechanisms to notify administrators of suspicious activities or system failures.
 * Regular Audit: Conduct periodic audits of logs to identify any unusual patterns or activities.
### 1.d Lack of Privacy Protections:
 * Data Minimization: Collect only the necessary data required for the device's function.
 * Data Encryption: Encrypt data at rest and in transit using strong encryption algorithms.
 * Data Retention Policies: Define and enforce data retention policies, ensuring that old and unnecessary data is securely deleted.
 * User Consent: Ensure that users provide informed consent before collecting any personal data, and provide options for users to opt-out or delete their data.
 * Privacy Impact Assessments: Conduct regular privacy impact assessments to identify and mitigate potential privacy risks.
### 1.e Unauthorized Access to Cloud Storage:
 * Strong Authentication: Implement multi-factor authentication (MFA) for accessing cloud storage.
 * Role-based Access Control (RBAC): Assign access rights based on roles within the organization, ensuring that users only have the permissions they need.
 * Encryption: Encrypt data stored in the cloud.
 * Regular Backups: Ensure that data is regularly backed up and that backups are securely stored.
 * Network Security: Use Virtual Private Cloud (VPC), firewalls, and other network security tools to restrict unauthorized network access.
 * Audit Logs: Maintain audit logs for all accesses and modifications to the data in cloud storage.
 * Cloud Provider Security: Ensure that the chosen cloud storage provider adheres to best security practices and complies with relevant regulations.
### 1.f Insider Threats Vulnerability
 * Access Control:
    * Implement the Principle of Least Privilege (PoLP).
    * Use Role-based Access Control (RBAC).
 * Monitoring:
    * Use User Behavior Analytics (UBA) tools.
    * Regularly review and monitor system logs.
 * Training:
    * Conduct Security Awareness sessions.
    * Educate about Social Engineering risks.
 * Technical Measures:
    * Deploy Data Loss Prevention (DLP) tools.
    * Monitor employee endpoint activities.
 * Administrative Actions:
    * Conduct regular background checks.
    * Enforce strict security policies.
    * Prepare an Incident Response Plan.
 * Reporting:
    * Implement a safe Whistleblower Policy.
 * Data Management:
    * Classify and encrypt sensitive data.
 * Post-Employment:
    * Revoke access and change passwords immediately after an employee exits.
 * Contracts:
    * Ensure third-party contracts cover data security.
 * Duty Segregation:
    * Ensure critical tasks require multiple individuals (Separation of Duties).

## 2. The chain of trust
**What is a cipher suite?**
Set of different algorithms which can be used in encrypted communication to ensure security.
**What is a chain of trust?**
A sequence of entities or systems through which information passes, and each entity relies on the credibility of the previous one to trust the information's authenticity.
It is broken when in some point the authentication fails and it is compromised
Example: it is used for the browser to validate the origin of a picture
**What is the root certificate authority (CA)?**
Primary source or the originator of the information. It's the entity whose credibility everyone recognizes, and the authenticity of the message begins here.
**What is an intermediate certificate authority (ICA)?**
Without encryption, an intermediate CA would be analogous to any intermediary or middle entity that relays or conveys the information from the primary source to the final recipient, ensuring its authenticity along the way.
**What is an end-user certificate?**
The final message or information received by the end user, after passing through various intermediaries.
**What topological structure of certificates is created by a CA?**
Flow of information, starting from the original source, passing through various channels or entities, and finally reaching the end recipient.
**What is the depth of a certificate?**
How many intermediary steps or entities the information has passed through before reaching the final recipient.
**The CA chain of trust is a representative for the trust chain type root of trust**
*What is the name of an other prominent representative of a chain of trust?*
In communication, another representative could be "word of mouth" or "rumor mills." Information is passed through individuals, each vouching for the previous source, but without a structured hierarchy.

*How do root of trust and web of trust differ?*
"Root of trust" in unencrypted communication implies a clear, often hierarchical flow of information from a trusted source. On the other hand, "web of trust" suggests a more decentralized, networked flow where information can come from various sources, relying on mutual trust among entities.
*Which one is more secure*
Neither method offers cryptographic security. However, a "root of trust" might be considered more reliable as there's a clear source of information, while the "web of trust" is more prone to distortions or misinformation due to its decentralized nature.

## Diffie-Hellman Key Exchange
**How are Diffie-Hellman key exchange and SSL/TLS related?** 
Diffie-Hellman helps SSL/TLS (secure web connections) set up a secret code that both the user and the website use to keep their conversation private.

## RSA Key Exchange
**How are RSA key exchange and SSL/TLS related?**
RSA key exchange plays a vital role in SSL/TLS by enabling the secure creation of an encrypted connection between a user's device (client) and a website's server. This ensures that the data exchanged between them is protected and cannot be easily intercepted or read by malicious parties.

The main difference with the two exchanges is that HD uses the same key to encrypt and decrypt, and in RSA the key to encrypt is not the same as the one to decrypt

## Symmetric validation
**forces Bob to validate Alice's certificate?**
Bob validates Alice's certificate to ensure he's connecting to the real Alice and not an imposter, enhancing security and trust.
**Is it possible to also force Alice to validate Bob's identity?**
Yes, Alice can also validate Bob's identity using his certificate for mutual authentication.
**Which additinal certificates are necessary?**
Necessary certificates include Alice's signed certificate from a trusted CA, Bob's certificate (if configured), and the CA's certificate (EXCA) for validation. These certificates establish trust and security.

## Learn about OpenWRT
 * Make notes in your personal portfolio!
 * Access the WEB interface of OpenWRT.
 * Discover the symbolic host name of the lan interface address.
 * ssh into the router using the IP address or the symbolic host name and execute shell commands.
 * sftp into the router and upload/download files to and from it.
 * Install new packages on the router using either
    * the WEB interface
    * or the opkg command line utility

**Where are the remote package repositories configured?**
in the /etc/opkg/distfeeds.conf file and /etc/opkg.conf file.

## Prepare Installation of the Package mqttbroker
### Tasks (group): Add Package Repository to OpenWRT 
1. Download the file with name 7646d48820c9bd9d containing the public package signing key from https://www.vchrist.at/owrt . Such keys are used by OpenWRT for validating the origin of packages. 
2. Upload this file (don’t change it’s name) into the directory /etc/opkg/keys/ on the router. 
3. On the router add the line: 
src/gz snodec https://www.vchrist.at/owrt/packages/aarch64_cortex-a53 
to the file /etc/opkg/customfeeds.conf pointing to my package repository for the router.  Create the file if it doesn’t exist. 
This can be done either using:
    * the WEB interface of the router 
    * or by hand using an editor. Install one if none is installed on the router (e.g. vi, joe, nano). 

## Installation of the mqttbroker Package on the Router
### Tasks (group): Install mqttbroker on the router:
1. Use the WEB interface or the command line to install the mqttbroker package.  This package contains the two MQTT v3.1.1 conform mqttbroker (replacement for mosquitto) and mqttintegrator (replacement for Node-RED) applications. 
    * Are the mqttbroker and mqttintegrator applications running after install? 
Jorrit did it

2. Start mqttbroker on the command line. If it is already running as a daemon stop the daemon. 
    * What happens?
We skipped this part.

## Explore the SSL/TLS Configuration Options of mqttbroker 
Start exploring the mqttbroker command line interface and the SSL/TLS configuration options by appending --help to mqttbroker on the command line.
Investigate the following:
 * ??? how to request a full "template" command line for mqttbroker? 
 * ??? how to retrief the current configuration of mqttbroker? 
 * ??? how to write current configuration to a config file? 
 * ??? how many server instances (services) does the mqttbroker offer? 
 * ??? what type of service do the individual instances offer? 
 * ??? via which protocol are the individual instances accessible? 
 * ??? do all server instances offer the same configuration sections (cathegories)? 
 * ??? which section of the instances providing encrypted communication, provides the configuration option for SSL/TLS? 
 * ??? what options can be configured for SSL/TLS encryption?

## Explore the SSL/TLS Configuration Options of mqttbroker
Tasks (group): Port IoT Scenarios to mqttbroker:
1. Select a cool and working IoT scenario. 
2. Duplicate selected arduino sketches and/or iotempower configurations.  
Do this systematically to not get confused. 
3. Duplicate selected your Node-Red flows.  
Do this systematically to not get confused. 
4. Reconfigure selected IoT scenarious to utilize mqttbroker instead of mosquitto.
    * Reconfigure selected arduino sketches and/or iotempower configurations to contact mqttbroker at IP address 192.168.12.254 instead of mosquitto on 192.168.12.1. 
    * Reconfigure selected Node-Red flows to contact mqttbroker at IP address 192.168.12.254 instead of mosquitto on 192.168.12.1. 
 Hint: First port only one simple sketch or simple iotempower configuration and the corresponding Node-Red flow to test the infrastructure. 
Hint: The ESP32 controler, desireably, should utilize the router WiFi instead of the RasPI one.

### Questions
**How to request a full "template" command line for mqttbroker?**
mqttbroker –commandline-full

**How to retrief the current configuration of mqttbroker?**
mqttbroker –show-config

**How to write current configuration to a config file?**
mqttbroker –write-config

**How many server instances (services) does the mqttbroker offer?**
Mqttbroker offers 5 instances
We used the following command: mqttbroker --help

**What type of service do the individual instances offer?**
*Instances:*
 * legacyin
    * Configuration for server instance 'legacyin'
 * tlsin
    * Configuration for server instance 'tlsin'
 * legacyun
    * Configuration for server instance 'legacyun'
 * mqtttlswebview
    * Configuration for server instance 'mqtttlswebview'
 * mqttlegacywebview
    * Configuration for server instance 'mqttlegacywebview’

**Via which protocol are the individual instances accessible?**
They are all accessible using the protocol MQTT (Message Queuing Telemetry Transport)

**Do all server instances offer the same configuration sections (cathegories)?**
No they don’t, some have 4 sections, and others have 5.

**Which section of the instances providing encrypted communication, provides the configuration option for SSL/TLS?**
*Instances:*
legacyin
![Afbeelding van WhatsApp op 2023-10-31 om 10 09 14_518d566a](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/11200881-06c0-4799-aeb9-dbc7a339de0b)

tlsin
![Afbeelding van WhatsApp op 2023-10-31 om 10 09 14_bce577aa](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/19a2489c-d282-4d0e-868d-4de39cdf5a57)

legacyun
![Afbeelding van WhatsApp op 2023-10-31 om 10 10 44_05d48c9a](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/4e3f626c-99d1-4d11-8762-ef34d0a9cc7b)

mqtttlswebview
![Afbeelding van WhatsApp op 2023-10-31 om 10 10 44_07ed3902](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c90273e8-7d7a-4448-bfe5-5fdc05cc5cb7)

mqttlegacywebview
![Afbeelding van WhatsApp op 2023-10-31 om 10 09 14_44507735](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/06ac408d-239b-4d09-96a1-a07e2fec387e)

