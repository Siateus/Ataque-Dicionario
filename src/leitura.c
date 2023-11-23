#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/leitura.h"

int testa_abertura (FILE *fp){

    if (fp == NULL){
        exit(0);
    }
    return contar_linhas(fp);

}

int contar_linhas(FILE *file){
    int count = 0;
    char buffer[100];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        count++;
    }

    rewind(file);
    return count;
}

void leitura (FILE *f_usuarios, FILE *f_senhas, int Tokens_size,
              int Users_size, Chaves *Tokens, Usuarios *Dados_usuarios) {

    for (int i = 0; i < Users_size; i++){
        fscanf(f_usuarios, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n---\n",
               Dados_usuarios[i].nome, Dados_usuarios[i].data,
               Dados_usuarios[i].login, Dados_usuarios[i].senha,
               Dados_usuarios[i].ultima_modificacao);

    }

    int j;
    for (j = 0; j < Tokens_size; j++) {
        fscanf(f_senhas, "%s\n", Tokens[j].senhas);
    }
}

