#include "aluno.h"

int main(int argc, char const *argv[]) {
    Aluno a1 = criarAluno("Maria", 559087, 8.5);
    Aluno a2 = criarAluno("João", 558761, 7.0);
    imprimirAluno(&a1);
    imprimirAluno(&a2);

    return 0;
}
