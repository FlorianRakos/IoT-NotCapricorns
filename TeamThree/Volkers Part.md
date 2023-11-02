
Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures from Volker.
 
## Index
1. [Identify Security Risks](#1-identify-security-risks)
2. [The chain of trust](#2-The-chain-of-trust)
3. [Diffie-Hellman Key Exchange](#3-Diffie-Hellman-Key-Exchange)
4. [RSA Key Exchange](#4-RSA-Key-Exchange)
5. [Symmetric validation](#5-Symmetric-validation)
6. [Learn about OpenWRT](#6-Learn-about-OpenWRT)
7. [Prepare Installation of the Package mqttbroker](#7-Prepare-Installation-of-the-Package-mqttbroker)
8. [Installation of the mqttbroker Package on the Router](#8-Installation-of-the-mqttbroker-Package-on-the-Router)
9. [Explore the SSL and TLS Configuration Options of mqttbroker](#9-Explore-the-SSL-and-TLS-Configuration-Options-of-mqttbroker)

## 1 Identify Security Risks 
For the next excercise we need to use our scenario to identify the security risks that can occur.

**Which security vulnerabilities did you encounter in your IoT scenarious?**
 * Device (footmouse) security and management
 * Lack of monitoring and logging
 * Lack of privacy protections
 * Unauthorized access to cloud storage
 * Insider threats (Roberto or Pieter)

**Which measures can be taken to close the vulnerabilities?**
*Device Security and Management:*
 * Regular Updates: to patch any known vulnerabilities.
 * Secure Boot: to ensure that the device only boots with trusted software.
 * Hardware-based Security: such as Trusted Platform Modules (TPM) or Hardware Security Modules (HSM), for cryptographic      operations and secure key storage.
 * Remote Device Management:  to allow administrators to monitor, update, and manage devices remotely.
 * Device Authentication: Use strong authentication mechanisms to ensure that only authorized devices can connect to the network.
**Lack of Monitoring and Logging:**
 * Enable Logging: Ensure all devices have logging capabilities enabled, capturing all relevant events and anomalies.
 * Centralized Monitoring: Use a centralized monitoring system to aggregate logs from all devices, making it easier to detect anomalies or security breaches.
 * Real-time Alerts: Implement real-time alerting mechanisms to notify administrators of suspicious activities or system failures.
 * Regular Audit: Conduct periodic audits of logs to identify any unusual patterns or activities.
**Lack of Privacy Protections:**
 * Data Minimization: Collect only the necessary data required for the device's function.
 * Data Encryption: Encrypt data at rest and in transit using strong encryption algorithms.
 * Data Retention Policies: Define and enforce data retention policies, ensuring that old and unnecessary data is securely deleted.
 * User Consent: Ensure that users provide informed consent before collecting any personal data, and provide options for users to opt-out or delete their data.
 * Privacy Impact Assessments: Conduct regular privacy impact assessments to identify and mitigate potential privacy risks.
**Unauthorized Access to Cloud Storage:**
 * Strong Authentication: Implement multi-factor authentication (MFA) for accessing cloud storage.
 * Role-based Access Control (RBAC): Assign access rights based on roles within the organization, ensuring that users only have the permissions they need.
 * Encryption: Encrypt data stored in the cloud.
 * Regular Backups: Ensure that data is regularly backed up and that backups are securely stored.
 * Network Security: Use Virtual Private Cloud (VPC), firewalls, and other network security tools to restrict unauthorized network access.
 * Audit Logs: Maintain audit logs for all accesses and modifications to the data in cloud storage.
 * Cloud Provider Security: Ensure that the chosen cloud storage provider adheres to best security practices and complies with relevant regulations.
**Insider Threats Vulnerability**
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

## 3. Diffie-Hellman Key Exchange
**How are Diffie-Hellman key exchange and SSL/TLS related?** 
Diffie-Hellman helps SSL/TLS (secure web connections) set up a secret code that both the user and the website use to keep their conversation private.

## 4. RSA Key Exchange
**How are RSA key exchange and SSL/TLS related?**
RSA key exchange plays a vital role in SSL/TLS by enabling the secure creation of an encrypted connection between a user's device (client) and a website's server. This ensures that the data exchanged between them is protected and cannot be easily intercepted or read by malicious parties.

The main difference with the two exchanges is that HD uses the same key to encrypt and decrypt, and in RSA the key to encrypt is not the same as the one to decrypt
10. Explore the SSL/TLS Configuration Options of mqttbroker

## 5. Symmetric validation
**forces Bob to validate Alice's certificate?**
Bob validates Alice's certificate to ensure he's connecting to the real Alice and not an imposter, enhancing security and trust.
**Is it possible to also force Alice to validate Bob's identity?**
Yes, Alice can also validate Bob's identity using his certificate for mutual authentication.
**Which additinal certificates are necessary?**
Necessary certificates include Alice's signed certificate from a trusted CA, Bob's certificate (if configured), and the CA's certificate (EXCA) for validation. These certificates establish trust and security.

## 6. Learn about OpenWRT
We accessed the WEB interface of Open WRT and searched for the symbolic host name of the lan interface address that was OpenWrt
Then we installed opkg update on PuTTY. On the first try the resource was temporarily unavailable because we tried to update it at the same time as Jorrit. When he finished, we tried again and it upgraded correctly.
Log in:
![OpenWRT_61access_and_update](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/80234fbd-c48d-47c4-aa29-7d593da2de3e)
![OpenWRT_8_mqttbroker_install](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/ac312252-82df-473f-95a5-f1d2a360a7f0)
<br><br>
We created a nano so that the packages get installed in the router. See here
![OpenWRT_62new_packages](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/ba2b8356-5ccd-4576-9ed8-33b98684017a)

**Where are the remote package repositories configured?**
in the /etc/opkg/distfeeds.conf file and /etc/opkg.conf file.

## 7. Prepare Installation of the Package mqttbroker
Jorrit downloaded the file with name 7646d48820c9bd9d containing the public package signing key from https://www.vchrist.at/owrt . He upload it into the directory /etc/opkg/keys/ on the router, and then added this line:
src/gz snodec https://www.vchrist.at/owrt/packages/aarch64_cortex-a53 ,
to the file /etc/opkg/customfeeds.conf.  

## 8. Installation of the mqttbroker Package on the Router
We then used the command line to install the mqttbroker package. 

## 9. Explore the SSl and TLS Configuration Options of mqttbroker
**How to request a full "template" command line for mqttbroker?**
 * mqttbroker –commandline-full

**How to retrief the current configuration of mqttbroker?**
 * mqttbroker –show-config

**How to write current configuration to a config file?**
 * mqttbroker –write-config

**How many server instances (services) does the mqttbroker offer?**
 * Mqttbroker offers 5 instances
 * We used the following command: mqttbroker --help

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

**What options can be configured for SSL/TLS encryption?**

## 10 Creating the certificate
We started creating the certificate by following the steps from the presentation. We made a small mistake because we were too enthusiastic about creating one, and we already saved it while not adjusting al the settings. We deleted this version and started over.

**The Root**
We followed the same steps and then we got to the following pop up messages:
![Afbeelding van WhatsApp op 2023-10-31 om 10 37 23_f7cd4cbe](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/74d90311-0de7-4abf-b5a8-8d42ecfec7d4)
This was good. We successfully created our private root. 
After that we continued to adjust some settings:
![Afbeelding van WhatsApp op 2023-10-31 om 10 37 23_3a9d6a6b](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/dec63130-066b-4dbb-ad2a-09a260b8c828)
Then the root showed that it was correctly created:
![Afbeelding van WhatsApp op 2023-10-31 om 10 42 53_599abf39](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/7be15c42-0ce5-47ad-9ef1-b68d69e9b2a8)
We edited some extra extentions:
![Afbeelding van WhatsApp op 2023-10-31 om 11 04 29_063c83c6](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/d127f426-f17a-4ed6-bab7-1aa358d898af)
![Afbeelding van WhatsApp op 2023-10-31 om 11 04 29_30eeb86f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/e64caec5-89b0-4667-a99d-5421aa33a88a)

And eventually everything was done. We were now the owners of a fully working certificate.
![Afbeelding van WhatsApp op 2023-10-31 om 11 04 29_bc6aab41](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/fd6c8de0-bcd1-4903-80e3-0e5a72096dcf)

The following picture shows that the "End Entity" is inside the Root:
![Afbeelding van WhatsApp op 2023-10-31 om 11 04 30_f2875a8a](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/53957886-9c52-478b-8848-bff30778b373)

We have imported them on Cristina's computer:
![Afbeelding van WhatsApp op 2023-10-31 om 11 04 29_4b04b072](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/9c604d12-4b1c-4c44-8bd7-85bc0efc6f5a)
And it was there, so we definitely have our private key.

**Use the certificates to secure communication with the mqttbroker**
The first thing we did was install the Root CA certificate on Cristina's webbrowser.

The we configured the mqtttlswebview instance of the mqttbroker so we were able to use the created end entity server
certificate chain and the corresponding private key
It did not really work out, we encountered a lot of different errors which causes us to be stuck for a while. We have a few pictures of the errors:
The first picture said that the address in use
![Afbeelding van WhatsApp op 2023-10-31 om 12 28 04_c4423890](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/83efa047-a006-4d68-9319-7933615968f3)
We tried to wait for a couple of minutes and try again, you can already guess it, it didn't work.
We wrote on all the instances to re-use the address.
![Afbeelding van WhatsApp op 2023-10-31 om 12 28 04_cb7b9ded](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/cd14f22a-d3d8-4c1e-89dd-ff3df8425db1)
We hoped this would work, but you can guess again, it didn't work.
We "killed" the mqttbroker, so we could run it again. 
![Afbeelding van WhatsApp op 2023-10-31 om 12 28 04_2039cf58](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/54f83329-99c6-4c51-a9ae-1dd76e2323a7)
Some of the instances worked, but there was one of them that still had an annoying error.
![Afbeelding van WhatsApp op 2023-10-31 om 12 28 04_19f43ea7](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/b1d9b157-234e-411f-a364-c89a84399306)

We discovered that the links to the certificate had the wrong endings, we were specifying the route "Cristina" directory, but we were already inside the directory. We also did not specify the key (which we did have).
The wrong command:
![image](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/1c0cfd51-3d62-4f7e-a272-1afd09fc77e2)
The right command:
![image](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/da9b5c42-db5d-46ea-90c4-d40dd51959e3)

After this, we entered the following pathway to see the list of all connected clients. The pathway we followed was: "https://192.168.12.254:8088/clients/"
![image](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/78f8b995-125e-41ef-afdb-af10b1b4b22c)

We sadly were not able to complete the next steps, Cristina and Luca (the people who worked together on this) did not have the knowledge to complete this. 



