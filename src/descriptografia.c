#include <string.h>
#include "../include/descriptografia.h"

// Função para descriptografar a senha de um usuário.
int desencriptacao(char *hash, Usuarios *Dados_usuarios) {

    // Compara o hash criptografado com a senha do usuário.
    if (strncmp(hash, Dados_usuarios->senha, 64) == 0){
        return 1; // Se eles forem iguais, retorna 1, indicando que a descriptografia foi bem-sucedida.
    }
    return 0; // Se eles não forem iguais, retorna 0, indicando que a descriptografia falhou.
}
