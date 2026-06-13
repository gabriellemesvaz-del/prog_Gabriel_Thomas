#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    int n, i;
    int maior = 0, menor = 0, acimaMedia = 0;
    int encontrado = 0;
    float soma = 0, media;
    char busca[50];

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    struct Aluno turma[n];

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;

        if (turma[i].nota > turma[maior].nota) {
            maior = i;
        }

        if (turma[i].nota < turma[menor].nota) {
            menor = i;
        }
    }

    media = soma / n;

    for (i = 0; i < n; i++) {
        if (turma[i].nota > media) {
            acimaMedia++;
        }
    }

    printf("\nBOLETIM\n");
    printf("-------------------------\n");
    printf("Nome\t\tNota\n");

    for (i = 0; i < n; i++) {
        printf("%s\t\t%.1f\n",
               turma[i].nome,
               turma[i].nota);
    }

    printf("-------------------------\n");
    printf("Media da turma: %.2f\n", media);

    printf("Maior nota: %s (%.1f)\n",
           turma[maior].nome,
           turma[maior].nota);

    printf("Menor nota: %s (%.1f)\n",
           turma[menor].nome,
           turma[menor].nota);

    printf("Alunos acima da media: %d\n",
           acimaMedia);

    printf("\nBuscar aluno: ");
    scanf(" %49[^\n]", busca);

    for (i = 0; i < n; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
            printf("\nAluno encontrado!\n");
            printf("Nome: %s\n", turma[i].nome);
            printf("Nota: %.1f\n", turma[i].nota);

            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Aluno nao encontrado.\n");
    }

    return 0;
}
