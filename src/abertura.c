#include <stdio.h>
#include <stdlib.h>
#include "../include/abertura.h"

FILE *arquivos_usuarios, *arquivo_senhas, *arquivo_saida;

int Passwords_size, Users_size;

// Funcao para testar se um arquivo foi aberto corretamente.
void testa_abertura (FILE *fp){

    if (fp == NULL){
        printf("Falha ao abrir arquivo\n");
        exit(0); // Sai do programa.
    }
}

// Funcao para contar o numero de linhas em um arquivo
int contar_linhas(FILE *file){
    int count = 0;
    char buffer[100];

    // Le cada linha do arquivo até o final.
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        count++;
    }

    rewind(file); // Retorna o ponteiro do arquivo para o inicio.
    return count;
}

// Funcao para abrir os arquivos
void abrir_arquivos(int argc, char *argv[]){
    int size;
    arquivos_usuarios = fopen(argv[1], "r");
    arquivo_senhas = fopen(argv[2], "r");
    arquivo_saida = fopen(argv[3], "w");

    // Testa se os arquivos foram abertos corretamente.
    testa_abertura(arquivos_usuarios);
    testa_abertura(arquivo_senhas);
    testa_abertura(arquivo_saida);

    // Conta os numeros de linhas nos arquivos de usuarios senhas.
    Passwords_size = contar_linhas(arquivo_senhas);
    size = contar_linhas(arquivos_usuarios);
    Users_size = size / 6; // Calcula o numero de usuários com base no número de linhas no arquivo de usuarios.
}
