
#include "../include/abertura.h"

int main(int argc, char *argv[] ) {

    abrir_arquivos(argc, argv);


    Usuarios *Dados_usuarios = (Usuarios *) calloc(Users_size, sizeof(Usuarios));
    Chaves *Tokens = (Chaves *) calloc(Tokens_size, sizeof(Chaves));

    leitura(arquivos_usuarios, arquivo_senhas, Tokens_size, Users_size, Tokens, Dados_usuarios);
    for (int i = 0; i < Users_size; i++) {
        for (int k = 0; k < Tokens_size; k++) {
            char *hash = cripto(&Tokens[k]);
            int x = desencriptacao(hash, &Dados_usuarios[i]);
            if (x == 1) {
                saida(arquivo_saida, &Dados_usuarios[i], &Tokens[k]);
                free(hash);
                break;
            }
            free(hash);
        }
    }

    free(Dados_usuarios);
    free(Tokens);
    fclose(arquivos_usuarios);
    fclose(arquivo_senhas);
    fclose(arquivo_saida);

    return 0;
}
