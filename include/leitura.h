
#ifndef PROJETO03_LEITURA_H
#define PROJETO03_LEITURA_H

#include <stdio.h>

// Define a estrutura 'Chaves', que contém uma string 'senhas'.
typedef struct chaves {
    char senhas[32];
} Chaves;

// Define a estrutura 'Usuarios', que contém várias strings para armazenar informações do usuário.
typedef struct usuarios {
    char nome[51];
    char data[13];
    char login[21];
    char senha[100];
    char ultima_modificacao[13];

} Usuarios;



void leitura (FILE *f_usuarios, FILE *f_senhas, int Tokens_size,
              int Users_size, Chaves *Passwords, Usuarios *Dados_usuarios);

#endif //PROJETO03_LEITURA_H
