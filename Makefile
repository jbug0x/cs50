CC = clang
CFLAGS = -std=c23 -ggdb -Wall -Wextra
LDLIBS = -lm -lcs50

.DEFAULT_GOAL := help

.PHONY: help $(MAKECMDGOALS)

help:
	@echo "Uso: make caminho/arquivo.c"

$(MAKECMDGOALS):
	@src="$@"; \
	if [ ! -f "$$src" ]; then \
		echo "Arquivo não encontrado: $$src"; \
		exit 1; \
	fi; \
	if [ "$${src##*.}" != "c" ]; then \
		echo "Informe um arquivo .c"; \
		exit 1; \
	fi; \
	out="$${src%.c}"; \
	$(CC) "$$src" -o "$$out" $(CFLAGS) $(LDLIBS)
