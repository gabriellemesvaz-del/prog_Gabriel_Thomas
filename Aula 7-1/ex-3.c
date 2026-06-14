
#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

void lerAlunos(Aluno turma[], int n);
void calcularMedias(Aluno turma[], int n);
void ordenarPorMedia(Aluno turma[], int n);
void imprimirBoletim(Aluno turma[], int n);

int main() {
    int n;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    Aluno turma[n];

    lerAlunos(turma, n);
    calcularMedias(turma, n);
    ordenarPorMedia(turma, n);
    imprimirBoletim(turma, n);

    return 0;
}

void lerAlunos(Aluno turma[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &turma[i].nota3);
    }
}

void calcularMedias(Aluno turma[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        turma[i].media =
            (turma[i].nota1 +
             turma[i].nota2 +
             turma[i].nota3) / 3.0;
    }
}

void ordenarPorMedia(Aluno turma[], int n) {
    int i, j, iMaior;
    Aluno temp;

    for (i = 0; i < n - 1; i++) {
        iMaior = i;

        for (j = i + 1; j < n; j++) {
            if (turma[j].media > turma[iMaior].media) {
                iMaior = j;
            }
        }

        temp = turma[i];
        turma[i] = turma[iMaior];
        turma[iMaior] = temp;
    }
}

void imprimirBoletim(Aluno turma[], int n) {
    int i;

    printf("\n=== BOLETIM (RANKING) ===\n");
    printf("%-5s %-20s %-8s\n",
           "Pos.", "Nome", "Media");

    for (i = 0; i < n; i++) {
        printf("%-5d %-20s %-8.2f\n",
               i + 1,
               turma[i].nome,
               turma[i].media);
    }
}
