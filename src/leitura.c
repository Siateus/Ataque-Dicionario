#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/leitura.h"



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

