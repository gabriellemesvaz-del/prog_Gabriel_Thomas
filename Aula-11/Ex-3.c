#include <stdio.h>

struct Aluno {
    char nome[30];
    float nota;
};

int particionar(struct Aluno v[], int inicio, int fim) {
    float pivo = v[fim].nota;
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        
        if (v[j].nota >= pivo) {
            i++;

            struct Aluno temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    struct Aluno temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quicksort(struct Aluno v[], int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        quicksort(v, inicio, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    struct Aluno alunos[] = {
        {"Ana", 8.5},
        {"Carlos", 6.0},
        {"Maria", 9.8},
        {"Joao", 7.2},
        {"Pedro", 10.0}
    };

    int n = 5;

    printf("Antes:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.1f\n", alunos[i].nome, alunos[i].nota);
    }

    quicksort(alunos, 0, n - 1);

    printf("\nDepois (ordem decrescente):\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.1f\n", alunos[i].nome, alunos[i].nota);
    }

    return 0;
}
