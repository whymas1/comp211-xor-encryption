
#include <stdio.h>
#include <string.h>

void xor_encrypt(unsigned char* message, size_t length, unsigned char key) {
    for (size_t i = 0; i < length; i++) {
        message[i] ^= key;
    }
}

int main(void) {
    unsigned char message[] = "HELLO";
    unsigned char key = 42;

    size_t length = strlen((char*)message);

    printf("Original message: %s\n", message);
    printf("Encryption key: %u\n", (unsigned int)key);

    xor_encrypt(message, length, key);

    printf("Encrypted bytes: ");
    for (size_t i = 0; i < length; i++) {
        printf("%u ", (unsigned int)message[i]);
    }
    printf("\n");

    xor_encrypt(message, length, key);

    printf("Decrypted message: %s\n", message);

    return 0;
}
