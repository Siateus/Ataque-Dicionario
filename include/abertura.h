
#ifndef PROJETO03_ABERTURA_H
#define PROJETO03_ABERTURA_H
extern FILE *arquivos_usuarios;
extern FILE *arquivo_senhas;
extern FILE *arquivo_saida;
extern int Tokens_size;
extern int Users_size;
int contar_linhas(FILE *file);

int testa_abertura (FILE *fp);

void abrir_arquivos(int argc, char *argv[]);

#endif //PROJETO03_ABERTURA_H
