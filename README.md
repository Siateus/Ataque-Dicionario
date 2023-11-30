# Ataque de Dicionário

## Introdução

Um "Ataque de Dicionário" é uma técnica comum usada em testes de segurança cibernética
e quebra de criptografia.
Este método envolve o uso de um conjunto predefinido de palavras, conhecido como 
"dicionário", para adivinhar senhas ou chaves de criptografia.

## Especificação
Os caminhos de entrada e saida são obtidos através da linha de comando.

- Primeiro argumento: caminho do arquivo de usuários.
- Segundo argumento: caminho do arquivo de senhas fracas.
- Terceiro argumento: caminho do arquivo de relatório de quebra.

#### Arquivo de usuários


O arquivo de usuários possui os dados dos usuários juntamente com as suas senhas
criptografadas. Cada usuário é descrito por diversas linhas, contendo os seguintes dados:
- Nome completo (até 50 caracteres). Pode haver espaços no nome completo;
- Data de nascimento no formato DD/MM/AAAA (10 caracteres);
- Login (até 20 caracteres);
- Senha criptografada: (64 caracteres);
- Data da última alteração de senha no formato DD/MM/AAAA (10 caracteres).

Após a descrição de cada usuário, há uma linha com o separador ---.

#### Exemplo de Arquivo de usuários

~~~~Daniel Saad
01/01/1850
danielsaad
981a16abd878e773ba98c10fd55db367a05f807f2eb5b5c3f2b86efbb218e2e3
03/11/2023
---
Marcus Vinicius
02/02/1950
marquinhos
65e84be33532fb784c48129675f9eff3a682b27168c0ea744b2cf58ee02337c5
20/10/2023
---
Cleidison Santos
24/12/2000
cleidison
d58d736c7a967fb5f307951932734f8b0594725faa5011dbb66a8c538e635fb6
10/5/2021
---
~~~~

## Intruções de Compilação e Execução
Para compilar o programa, siga as etapas a seguir:
- Certifique-se de ter o GCC (GNU Compiler Collection) instalado em seu sistema. Você pode verificar isso executando `gcc --version`no terminal.

- Abra um terminal e navegue até o diretório onde estão os arquivos de código-fonte, Cabeçalho e o Makefile.

- Compile o programa usando o Makefile executando o seguinte comando: `make`

Isso vai compilar os arquivos fonte e gerar o executável conforme definido no Makefile
- Após a compilação ser concluída com sucesso, você terá um executável chamado `./main`

- Se necessário, você pode executar o comando `make clean` para remover os arquivos gerados durante a compilação.
---
## Autor
Esse programa foi desenvolvido por  **Matheus Silva Pinheiro**.

