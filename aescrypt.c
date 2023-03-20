#include <stdio.h>
#include <string.h>
#include "aes.h"
#include "aes1.h"

int main() 
{
    // Initialize the key and IV
    unsigned char key[] = "aaaaaaaahhhhhhrrfdsertvfdsewqpnh";
    unsigned char iv[] = "1234567812345678";

    // Initialize the plaintext string
    char plaintext[] = "Symmetric encryption is very fast as compared to asymmetric encryption and are used in systems such as database system. Following is an online tool to generate AES encrypted password and decrypt AES encrypted password.";

    unsigned char ciphertext[256];

    // Initialize AES context and set key/IV
    aes_context aes_ctx;
    AES_set_encrypt_key(key, 256, &aes_ctx);
    AES_cbc_encrypt(plaintext, ciphertext, strlen(plaintext), &aes_ctx, iv, aes_encrypt);

    // Print the resulting ciphertext
    printf("Ciphertext: ");
    for(int i = 0; i < strlen(plaintext); i++) 
    {
        printf("%02x", ciphertext[i]);
    }
    printf("\n");

    return 0;
}