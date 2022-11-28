# -*- Makefile -*-

.PHONY:test

test: printf_main.c ../*.c
	@cc -Wall -Wextra -Werror printf_main.c ../*.c
	@./a.out 1>trash.txt
	@cat res.txt
	@rm -rf res.txt trash.txt a.out
