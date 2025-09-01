#include <stdio.h>
#include "aluno.h"

int main(int argc, char const *argv[]) {
    Aluno a1 = criarAluno("Maria", 559087, 8.5);
    Aluno a2 = criarAluno("João", 558761, 7.0);
    imprimirAluno(&a1);
    imprimirAluno(&a2);

    Lista l = criarLista();
    adicionarAluno(&l, a1);
    adicionarAluno(&l, a2);

    printf("Buscando aluno com RM 558761\n");
    int idx = buscarAlunoPorRm(&l, 558761);
    if (idx > 0) {
        printf("Aluno encontrado.\n");
        imprimirAluno(&l.ptr[idx]);
    } else {
        printf("Aluno não encontrado\n");
    }
    return 0;
}
