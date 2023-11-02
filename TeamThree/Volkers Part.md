# Teamfolder

Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures from Volker.
 
## Index
1. [Git and Kit](#1-git-and-kit)
   * [1.a Partner, team git repo setup](#1a-partner-team-git-repo-setup)
   * [1.b The Kit](#1b-the-kit)

## Identify Security Risks 
For the next excercise we need to use our scenario to identify the security risks that can occur.

### Which security vulnerabilities did you encounter in your IoT scenarious? 
 * Device (footmouse) security and management
 * Lack of monitoring and logging
 * Lack of privacy protections
 * Unauthorized access to cloud storage
 * Insider threats (Roberto or Pieter)

### Which measures can be taken to close the vulnerabilities?
*Device Security and Management:*
 * Regular Updates: to patch any known vulnerabilities.
 * Secure Boot: to ensure that the device only boots with trusted software.
 * Hardware-based Security: such as Trusted Platform Modules (TPM) or Hardware Security Modules (HSM), for cryptographic      operations and secure key storage.
 * Remote Device Management:  to allow administrators to monitor, update, and manage devices remotely.
 * Device Authentication: Use strong authentication mechanisms to ensure that only authorized devices can connect to the network.
### Lack of Monitoring and Logging:
 * Enable Logging: Ensure all devices have logging capabilities enabled, capturing all relevant events and anomalies.
 * Centralized Monitoring: Use a centralized monitoring system to aggregate logs from all devices, making it easier to detect anomalies or security breaches.
 * Real-time Alerts: Implement real-time alerting mechanisms to notify administrators of suspicious activities or system failures.
 * Regular Audit: Conduct periodic audits of logs to identify any unusual patterns or activities.
### Lack of Privacy Protections:
 * Data Minimization: Collect only the necessary data required for the device's function.
 * Data Encryption: Encrypt data at rest and in transit using strong encryption algorithms.
 * Data Retention Policies: Define and enforce data retention policies, ensuring that old and unnecessary data is securely deleted.
 * User Consent: Ensure that users provide informed consent before collecting any personal data, and provide options for users to opt-out or delete their data.
 * Privacy Impact Assessments: Conduct regular privacy impact assessments to identify and mitigate potential privacy risks.
### Unauthorized Access to Cloud Storage:
 * Strong Authentication: Implement multi-factor authentication (MFA) for accessing cloud storage.
 * Role-based Access Control (RBAC): Assign access rights based on roles within the organization, ensuring that users only have the permissions they need.
 * Encryption: Encrypt data stored in the cloud.
 * Regular Backups: Ensure that data is regularly backed up and that backups are securely stored.
 * Network Security: Use Virtual Private Cloud (VPC), firewalls, and other network security tools to restrict unauthorized network access.
 * Audit Logs: Maintain audit logs for all accesses and modifications to the data in cloud storage.
 * Cloud Provider Security: Ensure that the chosen cloud storage provider adheres to best security practices and complies with relevant regulations.
### Insider Threats Vulnerability
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

## The chain of trust
### What is a cipher suite?
Set of different algorithms which can be used in encrypted communication to ensure security.
### What is a chain of trust?
A sequence of entities or systems through which information passes, and each entity relies on the credibility of the previous one to trust the information's authenticity.
It is broken when in some point the authentication fails and it is compromised
Example: it is used for the browser to validate the origin of a picture
### What is the root certificate authority (CA)?
Primary source or the originator of the information. It's the entity whose credibility everyone recognizes, and the authenticity of the message begins here.
### What is an intermediate certificate authority (ICA)?
Without encryption, an intermediate CA would be analogous to any intermediary or middle entity that relays or conveys the information from the primary source to the final recipient, ensuring its authenticity along the way.
### What is an end-user certificate?
The final message or information received by the end user, after passing through various intermediaries.
### What topological structure of certificates is created by a CA?
Flow of information, starting from the original source, passing through various channels or entities, and finally reaching the end recipient.
### What is the depth of a certificate?
How many intermediary steps or entities the information has passed through before reaching the final recipient.
### The CA chain of trust is a representative for the trust chain type root of trust
*What is the name of an other prominent representative of a chain of trust?*
In communication, another representative could be "word of mouth" or "rumor mills." Information is passed through individuals, each vouching for the previous source, but without a structured hierarchy.

*How do root of trust and web of trust differ?*
"Root of trust" in unencrypted communication implies a clear, often hierarchical flow of information from a trusted source. On the other hand, "web of trust" suggests a more decentralized, networked flow where information can come from various sources, relying on mutual trust among entities.
*Which one is more secure*
Neither method offers cryptographic security. However, a "root of trust" might be considered more reliable as there's a clear source of information, while the "web of trust" is more prone to distortions or misinformation due to its decentralized nature.

## Diffie-Hellman Key Exchange
### How are Diffie-Hellman key exchange and SSL/TLS related?  
Diffie-Hellman helps SSL/TLS (secure web connections) set up a secret code that both the user and the website use to keep their conversation private.
## RSA Key Exchange
### How are RSA key exchange and SSL/TLS related?
RSA key exchange plays a vital role in SSL/TLS by enabling the secure creation of an encrypted connection between a user's device (client) and a website's server. This ensures that the data exchanged between them is protected and cannot be easily intercepted or read by malicious parties.

The main difference with the two exchanges is that HD uses the same key to encrypt and decrypt, and in RSA the key to encrypt is not the same as the one to decrypt
