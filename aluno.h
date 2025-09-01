#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    char nome[50];
    float nota;
    int rm;
} Aluno;

typedef struct {
    Aluno *ptr;
    int len;
    int cap;
} Lista;

Aluno criarAluno(char *nome, int rm, float nota);
void imprimirAluno(Aluno *a);
void alterarNota(Aluno *a, float novaNota);

Lista criarLista();
void adicionarAluno(Lista *l, Aluno a);
void removerUltimo(Lista *l);
int buscarAlunoPorRm(Lista *l, int rm);

float calcularMedia(Lista l);

#endif
