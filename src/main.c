#include "../include/abertura.h"

int main(int argc, char *argv[] ) {

    abrir_arquivos(argc, argv);
    // Aloca memória para as estruturas de dados 'Usuarios' e 'Chaves'.
    Usuarios *Dados_usuarios = (Usuarios *) calloc(Users_size, sizeof(Usuarios));
    Chaves *Passwords = (Chaves *) calloc(Passwords_size, sizeof(Chaves));

    leitura(arquivos_usuarios, arquivo_senhas, Passwords_size, Users_size, Passwords, Dados_usuarios);

    // Loop aninhado para descriptografar as senhas dos usuarios.
    for (int i = 0; i < Users_size; i++) {
        for (int k = 0; k < Passwords_size; k++) {
            char *hash = cripto(&Passwords[k]); // Criptografa a senha.
            int x = desencriptacao(hash, &Dados_usuarios[i]); // Tenta descriptografar a senha do usuário.
            if (x == 1) { // Se a comparcao for bem-sucedida.

                // Escreve o relatorio no arquivo de saída.
                saida(arquivo_saida, &Dados_usuarios[i], &Passwords[k]);
                free(hash); // Libera a memória alocada para o hash.
                break;
            }
            free(hash); // Libera a memória alocada para o hash.
        }
    }

    // Libera a memória alocada para as structs.
    free(Dados_usuarios);
    free(Passwords);

    // Fecha os arquivos abertos.
    fclose(arquivos_usuarios);
    fclose(arquivo_senhas);
    fclose(arquivo_saida);

    return 0;
}
