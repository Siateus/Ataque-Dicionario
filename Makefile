CC = gcc
CFLAGS = -std=c11 -Iinclude
LDFLAGS = -lssl -lcrypto
DEPS = include/leitura.h include/saida.h include/criptografia.h include/descriptografia.h include/abertura.h
OBJ = src/main.o src/leitura.o src/saida.o src/criptografia.o src/descriptografia.o src/abertura.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) main
