#include <stdio.h>

struct aluno {
    char nome[50];
    float nota;
};

int main() {
    int n, i, acimadamedia = 0;
    float soma = 0, media;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    struct aluno turma[n];

    for (i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", turma[i].nome);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &turma[i].nota);
        soma += turma[i].nota;
    }

    media = soma / n;

    printf("\n------Boletim------\n");
    printf("Nome\tNota\n");

    for (i = 0; i < n; i++) {
        printf("%s\t%.2f\n", turma[i].nome, turma[i].nota);//
        if (turma[i].nota > media) {
            acimadamedia++;
        }
    }

    printf("Media da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acimadamedia);

    return 0;
}
