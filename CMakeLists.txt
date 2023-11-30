cmake_minimum_required(VERSION 3.20)
project(Ataque_de_Dicionario C)

set(CMAKE_C_STANDARD 11)
find_package(OpenSSL REQUIRED)
add_executable(main src/main.c
        src/leitura.c
        include/leitura.h
        src/saida.c
        include/saida.h
        src/criptografia.c
        include/criptografia.h
        src/descriptografia.c
        include/descriptografia.h
        src/abertura.c
        include/abertura.h)

target_link_libraries(main OpenSSL::SSL OpenSSL::Crypto)



