#include <string.h>
#include "../include/descriptografia.h"

int desencriptacao(char *hash, Usuarios *Dados_usuarios) {

    int i;
    //printf("\n");
    //printf("\t-------------------------------------\n");

    //printf("imprimindo ------------------\n hash s: %s\n hash u: %s\n\n", hash, Dados_usuarios->senha);
    if (strncmp(hash, Dados_usuarios->senha, 64) == 0){
        //printf("%d desencripracao:\n%s \n%s\n", i, hash, Dados_usuarios->senha);
        return i;
        }
    return 0;
}