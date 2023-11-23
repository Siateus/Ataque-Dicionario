#include <stdio.h>
#include <stdlib.h>
#include "../include/abertura.h"

FILE *arquivos_usuarios, *arquivo_senhas, *arquivo_saida;

int Tokens_size, Users_size;

int testa_abertura (FILE *fp){

    if (fp == NULL){
        exit(0);
    }

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
void abrir_arquivos(int argc, char *argv[]){
    int size;
    arquivos_usuarios = fopen(argv[1], "r");
    arquivo_senhas = fopen(argv[2], "r");
    arquivo_saida = fopen(argv[3], "w");

    testa_abertura(arquivos_usuarios);
    testa_abertura(arquivo_senhas);
    testa_abertura(arquivo_saida);

    Tokens_size = contar_linhas(arquivo_senhas);
    size = contar_linhas(arquivos_usuarios);
    Users_size = size / 6;
}
