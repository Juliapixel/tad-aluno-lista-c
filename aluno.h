#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    char nome[50];
    float nota;
    int rm;
} Aluno;

Aluno criarAluno(char *nome, int rm, float nota);
void imprimirAluno(Aluno *a);
void alterarNota(Aluno *a, float novaNota);

#endif
