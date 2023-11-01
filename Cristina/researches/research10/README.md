# Day 10
## Chain of trust
### What is a cipher suite?
Set of different algorithms which can be used in encrypted communication to ensure security.
What is a chain of trust?
### A sequence of entities or systems through which information passes, and each entity relies on the credibility of the previous one to trust the information's authenticity.
It is broken when in some point the authentication fails and it is compromised
<br><br>
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
## The CA chain of trust is a representative for the trust chain type root of trust
### What is the name of an other prominent representative of a chain of trust?
In communication, another representative could be "word of mouth" or "rumor mills." Information is passed through individuals, each vouching for the previous source, but without a structured hierarchy.

### How do root of trust and web of trust differ?
"Root of trust" in unencrypted communication implies a clear, often hierarchical flow of information from a trusted source. On the other hand, "web of trust" suggests a more decentralized, networked flow where information can come from various sources, relying on mutual trust among entities.
### Which one is more secure
Neither method offers cryptographic security. However, a "root of trust" might be considered more reliable as there's a clear source of information, while the "web of trust" is more prone to distortions or misinformation due to its decentralized nature.
## Diffie-Hellman Key Exchange
### How are Diffie-Hellman key exchange and SSL/TLS related?  
Diffie-Hellman helps SSL/TLS (secure web connections) set up a secret code that both the user and the website use to keep their conversation private.
## RSA Key Exchange
### How are RSA key exchange and SSL/TLS related?
RSA key exchange plays a vital role in SSL/TLS by enabling the secure creation of an encrypted connection between a user's device (client) and a website's server. This ensures that the data exchanged between them is protected and cannot be easily intercepted or read by malicious parties.
<br><br>
The main difference with the two exchanges is that HD uses the same key to encrypt and decrypt, and in RSA the key to encrypt is not the same as the one to decrypt
## Symmetric validation
### What forces Bob to validate Alice's certificate?
Bob validates Alice's certificate to ensure he's connecting to the real Alice and not an imposter, enhancing security and trust.
### Is it possible to also force Alice to validate Bob's identity? 
Yes, Alice can also validate Bob's identity using his certificate for mutual authentication.
### Which additinal certificates are necessary?
Necessary c ertificates include Alice's signed certificate from a trusted CA, Bob's certificate (if configured), and the CA's certificate (EXCA) for validation. These certificates establish trust and security.
## OpenWRT
Along with Luca, we learnt about OpenWRT, see HERE
