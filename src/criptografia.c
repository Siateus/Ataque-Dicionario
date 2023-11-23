#include <stdlib.h>
#include "../include/criptografia.h"

char* cripto (Chaves *Tokens) {

    char *mdHash = (char*)malloc(SHA256_DIGEST_LENGTH*2 + 1);
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char *)Tokens->senhas, strlen(Tokens->senhas), hash);

    for(int j = 0; j < SHA256_DIGEST_LENGTH; j++) {

        sprintf(&mdHash[j * 2], "%02x", (unsigned int) hash[j]);
        }

    return mdHash;
}