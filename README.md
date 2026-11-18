# comp211-xor-encryption
Will Hymas - Checkoff 3: Simple Encryption using XOR

## Project Overview

My project demonstrates how the XOR (Exclusive OR) bitwise operator can be used to encrypt and decrypt information in C. The XOR operator compares two bits,  returning 1 when they differ and 0 when they are the same. In my project, I cover how XOR works, how it can transform readable text into encrypted data, and why simple XOR encryption is not secure enough for protecting sensitive information.

## How XOR Encryption Works

Encryption uses the formula:

`Plaintext ^ Key = Ciphertext`

Decryption uses the same operation:

`Ciphertext ^ Key = Plaintext`

This works because:

`(A ^ B) ^ B = A`

## C Implementation

The program encrypts the message `HELLO` using the key `42`, displays the encrypted byte values, and decrypts the message using the same key.

### Compilation

```bash
gcc -Wall -Wextra -std=c11 xor_encryption.c -o xor_encryption
```

### Running the Program

```bash
./xor_encryption
```

### Expected Output

```text
Original message: HELLO
Encryption key: 42
Encrypted bytes: 98 111 102 102 101
Decrypted message: HELLO
```

## Security Limitations

This project is simply a demonstration, not a secure encryption application.

A single-byte key has only 256 possible values, making brute-force attacks practical. Reusing keys also exposes relationships between encrypted messages.

## Presentation

The accompanying `presentation.pdf` explains XOR operations, encryption and decryption, the C implementation, and security limitations.

## References

See `references.md` for sources used to learn about XOR and encryption.
