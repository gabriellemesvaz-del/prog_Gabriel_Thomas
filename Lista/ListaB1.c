#include <stdio.h>
struct aluno{
    char nome[50];
    float nota;
};
int main(){
    int N, i, aprovados=0;
    float soma=0, media;
    printf("Digite o numero de alunos: ");
    scanf("%d", &N);
    struct aluno turma[N];

    for(i=0; i<N; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", turma[i].nome);
        printf("Digite a nota do aluno: ");
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;
        if(turma[i].nota >= 7.0){
            aprovados++;
        }
    }
    media = soma / N;

    printf("\n------tabela da turma------\n");
    printf("Nome       Nota\n");
    for(i=0; i<N; i++){
        printf("%-10s %.2f\n", turma[i].nome, turma[i].nota);
    }
    printf("\nMedia da turma: %.2f\n", media);
    printf("Alunos aprovados: %d\n", aprovados);
    return 0;
}


