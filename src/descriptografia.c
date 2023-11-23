#include <string.h>
#include "../include/descriptografia.h"

int desencriptacao(char *hash, Usuarios *Dados_usuarios) {

    if (strncmp(hash, Dados_usuarios->senha, 64) == 0){
        return 1;
        }
    return 0;
}