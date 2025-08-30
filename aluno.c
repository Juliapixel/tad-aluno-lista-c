#include <stdio.h>
#include <string.h>

#include "aluno.h"

Aluno criarAluno(char *nome, int rm, float nota) {
    Aluno a = {
        .nota = nota,
        .rm = rm
    };
    strncpy((char *)&a.nome, nome, 49);
    a.nome[49] = 0;
    return a;
}

void imprimirAluno(Aluno *a) {
    printf("Nome: %s, RM: %d, Nota: %.1f\n", &a->nome, a->rm, a->nota);
}
