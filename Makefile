# Variables
CC = gcc
CFLAGS =  -Wall -Wpedantic -Wextra -std=c99 -g

# Regla para generar .exe a partir de .c
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

