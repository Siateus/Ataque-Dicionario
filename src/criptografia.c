#include <stdlib.h>
#include <openssl/sha.h>
#include "../include/criptografia.h"

// Função para criptografar um token.
char* cripto (Chaves *Passwords) {

    char *mdHash = (char*)malloc(SHA256_DIGEST_LENGTH*2 + 1); // Aloca memória para o hash criptografado.
    unsigned char hash[SHA256_DIGEST_LENGTH]; // Declara um array para o hash.
    // Usa a função SHA256 para criptografar a senha.
    SHA256((unsigned char *)Passwords->senhas, strlen(Passwords->senhas), hash);

    // Loop para converter o hash em uma string hexadecimal.
    for(int j = 0; j < SHA256_DIGEST_LENGTH; j++) {
        // Converte cada byte do hash em um caractere hexadecimal.
        sprintf(&mdHash[j * 2], "%02x", (unsigned int) hash[j]);
    }

    return mdHash;
}
