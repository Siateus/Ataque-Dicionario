#include "../include/saida.h"
//saida(arquivo_saida, x, dados, &Tokens[k]);

void saida(FILE *saida, Usuarios *Dados_usuarios, Chaves *Tokens){

    fprintf(saida, "%s\n", Dados_usuarios->login );
    fprintf(saida, "%s\n", Tokens->senhas );
    fprintf(saida, "%s\n", Dados_usuarios->nome );
    fprintf(saida, "%s\n", Dados_usuarios->data );
    fprintf(saida, "---\n");
}
