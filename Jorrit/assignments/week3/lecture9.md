# Lecture 6


## Identify Security Risks

risks:
- The password of our wifi is pretty simple
- The Node-RED is badly passworded
- The MQTT is unencrypted
- The password of the iot user on the Pi is standardised

measures:
- Using TLS/SSL
- Setting stronger passwords
- Setting passwords wherever possible (more than one point of failure)

## Chain of Trust
> - What is a cipher suit?
> - What is a chain of trust?
> - what is a root certificate authority?
> - What is an intermediate certificate authority?
> - What is an end-user certificate?
> - What topological structure of certificates is created by a CA?
> - What is the depth of a certificate?
> - The CA chain of trust is a representative for the trust chain type root of trust
>     - What ist the name of an other prominent representative of a chain of trust?
>     - How do root of trust and web of trust differ?
>     - Which one is more secure?

I'm not using ChatGPT. As much as like it as a tool, it's a bit of a crutch in an educational setting.
Google and Wikipedia, however, are perfectly fine.

A cipher suite is a combination of algorithms that provide security in a network connection. It typically uses TLS/SSL. A few of the included algorithms are a key exchange, a bulk encryption, and a message authentication code.

A chain of trust is the process of validating each hardware and software component from the root certificate to the intermediate certificates, to the end entity certificate (last component in the series). An example I can name from my internship last year is an imx8 device that would refuse to boot an OS that wasn't signed properly.

A certificate authority is an entity that stores, signs, and issues certificates. This certificate is used to prove the reliability of the entity using a private key. The root certificate authority is the authority that provided the certificate for the root (highest level in a chain) entity.

An intermediate certificate authority is the entity that provides the certificate for an intermediate (anywhere between end and root) entity.

An end-user certificate, a.k.a. end-entity certificate is the certificate issued to an end-user or device which proves its reliability.

The Certificate Authority creates a hierarchy of certificates. At the highest level is the root certificate, at lower levels (if any) are intermediate certificates, and at the lowest level are the end-user certificates.

The depth of a certificate refers to its position in the chain of trust. The root has a depth of 0, every level down increases the depth by 1.

Another representative of the chain of trust is a blockchain. It is a system in which there is virtual certainty that the records kept are reliable.

A web of trust is non-hierarchical/decentralised.

A web of trust doesn't have the problem of a single point of failure. The good thing about a chain of trust is that it enables all entities in a chain to trust each other, regardless of distance. The web of trust puts a higher level of responsibility on every entity in the web.

Which one is more secure is fully dependent on circumstance, but generally chain of trust is viewed as more reliable, especially at scale.

## Diffie-Hellman Key Exchange
> How are Diffie-Hellman key exchange and SSL/TLS related?

The Diffie-Hellman Key Exchange is a method by which two entities can exchange security keys over a public channel. It is (and variations of it are) the most common method by which TLS and SSL exchange ephemeral keys for securing a connection.

## Rivest–Shamir–Adleman (RSA) Key Exchange
> How are RSA key exchange and SSL/TLS related?

RSA (Rivest-Shamir-Adleman) is a widely used asymmetric encryption algorithm. It involves a pair of keys: a public key and a private key. Data encrypted with the public key can only be decrypted with the corresponding private key and vice versa. The use of RSA key exchange within SSL/TLS provides confidentiality for data exchanged during the session.
