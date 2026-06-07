#include <stdio.h>
struct aluno {
    char nome[50];
    float nota1 ,nota2, nota3;
    float media;
};

struct aluno calcularmedia(struct aluno a) {
    a.media = (a.nota1 + a.nota2 + a.nota3) / 3;
    return a;
}

char definirconceito(float media) {
    if (media >= 9) {
        return 'A';
    } else if (media >= 7) {
        return 'B';
    } else if (media >= 5) {
        return 'C';
    } else    
        return 'D';
    
    }

    void imprimiraluno(struct aluno a) {
        printf("%s - media: %.2f - conceito: %c\n", a.nome, a.media, definirconceito(a.media));
    }
int main() {
    int n, i;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    struct aluno alunos[n];
    for (i = 0; i < n; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Digite as tres notas do aluno: ");
        scanf("%f %f %f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);
        alunos[i] = calcularmedia(alunos[i]);
    }
    printf("\n------ boletim ------\n");
    for (i = 0; i < n; i++) {
        imprimiraluno(alunos[i]);
    }
    return 0;
}
