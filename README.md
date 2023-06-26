# RSA Factoring Challenge
### Why is the RSA algorithm used?
RSA derives its security from the difficulty of factoring large integers that are the product of two large prime numbers. Multiplying these two numbers is easy, but determining the original prime numbers from the total -- or factoring -- is considered infeasible due to the time it would take using even today's supercomputers.

The public and private key generation algorithm is the most complex part of RSA cryptography. Two large prime numbers, p and q, are generated using the Rabin-Miller primality test algorithm. A modulus, n, is calculated by multiplying p and q. This number is used by both the public and private keys and provides the link between them. Its length, usually expressed in bits, is called the key length.

### features
- Factorizes large numbers into a product of two prime numbers
- Supports multiple numbers in a file
- Outputs the factorization in a simple format
- Runs without any dependencies or installation
- Works on Standard Ubuntu 20.04 LTS
