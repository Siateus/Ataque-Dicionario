cmake_minimum_required(VERSION 3.26)
project(Projeto03 C)

set(CMAKE_C_STANDARD 11)
find_package(OpenSSL REQUIRED)
add_executable(Projeto03 src/main.c
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

target_link_libraries(Projeto03 OpenSSL::SSL OpenSSL::Crypto)



