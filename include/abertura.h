
#ifndef PROJETO03_ABERTURA_H
#define PROJETO03_ABERTURA_H


#include <stdio.h>
#include <stdlib.h>
#include "../include/leitura.h"
#include "../include/saida.h"
#include "../include/criptografia.h"
#include "../include/descriptografia.h"

extern FILE *arquivos_usuarios;
extern FILE *arquivo_senhas;
extern FILE *arquivo_saida;
extern int Passwords_size;
extern int Users_size;

int contar_linhas(FILE *file);

void testa_abertura (FILE *fp);

void abrir_arquivos(int argc, char *argv[]);

#endif //PROJETO03_ABERTURA_H
