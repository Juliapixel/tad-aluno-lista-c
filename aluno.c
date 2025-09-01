#include <stdio.h>
#include <stdlib.h>
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

void alterarNota(Aluno *a, float novaNota) {
    a->nota = novaNota;
}

void imprimirAluno(Aluno *a) {
    printf("Nome: %s, RM: %d, Nota: %.1f\n", &a->nome, a->rm, a->nota);
}

Lista criarLista() {
    Lista l = {
        .ptr = 0,
        .cap = 0,
        .len = 0
    };
    return l;
}

void adicionarAluno(Lista *l, Aluno a) {
    if (l->len == l->cap) {
        if (l->cap == 0) l->cap = 1; else l->cap *= 2;
        l->ptr = realloc(l->ptr, l->cap * sizeof(Aluno));
    }
    l->ptr[l->len] = a;
    l->len += 1;
}

void removerUltimo(Lista *l) {
    if (l->len > 0) l->len -= 1;
}

int buscarAlunoPorRm(Lista *l, int rm) {
    for (int i = 0; i < l->len; i++) {
        if (l->ptr[i].rm == rm) return i;
    }
    return -1;
}

float calcularMedia(Lista l) {
    float soma = 0;
    for (int i = 0; i < l.len; i++) {
        soma += l.ptr[i].nota;
    }
    return (l.len > 0) ? (soma / l.len) : 0;
}