
#ifndef PROJETO03_LEITURA_H
#define PROJETO03_LEITURA_H

#include <stdio.h>


typedef struct chaves {
    char senhas[32];
} Chaves;

typedef struct usuarios {
    char nome[51];
    char data[13];
    char login[21];
    char senha[100];
    char ultima_modificacao[13];

} Usuarios;



void leitura (FILE *f_usuarios, FILE *f_senhas, int Tokens_size,
              int Users_size, Chaves *Tokens, Usuarios *Dados_usuarios);

#endif //PROJETO03_LEITURA_H
