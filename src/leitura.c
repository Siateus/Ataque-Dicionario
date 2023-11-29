#include <stdio.h>
#include "../include/leitura.h"

// Função para ler os dados dos arquivos de usuários e senhas.
void leitura (FILE *f_usuarios, FILE *f_senhas, int Tokens_size,
              int Users_size, Chaves *Passwords, Usuarios *Dados_usuarios) {

    // Loop para ler os dados dos usuários.
    for (int i = 0; i < Users_size; i++){
        // Lê os dados do usuário do arquivo.
        fscanf(f_usuarios, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n---\n",
               Dados_usuarios[i].nome, Dados_usuarios[i].data,
               Dados_usuarios[i].login, Dados_usuarios[i].senha,
               Dados_usuarios[i].ultima_modificacao);
    }

    // Loop para ler as senhas.
    for (int j = 0; j < Tokens_size; j++) {
        fscanf(f_senhas, "%s\n", Passwords[j].senhas); // Lê a senha do arquivo.
    }

}
