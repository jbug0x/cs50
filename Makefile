
CC = clang
CFLAGS = -std=c23 -ggdb -Wall -Wextra
# LDLIBS = -lm -lcs50

.DEFAULT_GOAL := help

.PHONY: help

help:
	@echo "Uso: make caminho/arquivo.c"

ifneq ($(MAKECMDGOALS),help)

.PHONY: $(MAKECMDGOALS)

$(MAKECMDGOALS):
	$(if $(filter %.c,$@),,$(error Informe um arquivo .c))
	$(if $(wildcard $@),,$(error Arquivo nao encontrado: $@))
	$(CC) "$@" -o "$(basename $@)" $(CFLAGS) $(LDLIBS)

endif
