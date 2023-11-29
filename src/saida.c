#include "../include/saida.h"

// Função para escrever o relatorio no arquivo de saída.
void saida(FILE *saida, Usuarios *Dados_usuarios, Chaves *Passwords){

    fprintf(saida, "%s\n", Dados_usuarios->login );
    fprintf(saida, "%s\n", Passwords->senhas );
    fprintf(saida, "%s\n", Dados_usuarios->nome );
    fprintf(saida, "%s\n", Dados_usuarios->data );
    fprintf(saida, "---\n");
}
