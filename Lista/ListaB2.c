#include <stdio.h>
struct produto{
    char nome[50];
    float preco;
    int quantidade;
};
int main(){
    int N, i;
    float valor, total=0, maior=0;
    int posmaior=0;

    printf("Digite o numero de produtos no estoque: ");
    scanf("%d", &N);

    struct produto estoque[N];

    for(i=0; i<N; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", estoque[i].nome);
        printf("Digite o preco do produto: ");
        scanf("%f", &estoque[i].preco);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &estoque[i].quantidade);

        }
    
        printf("\n------tabela de estoque------\n");

        for(i=0; i<N; i++){
            valor = estoque[i].preco * estoque[i].quantidade;
            printf("%s - R$ %.2f\n", estoque[i].nome, valor);
            total += valor;

            if(i == 0 || valor > maior){
                maior = valor;
                posmaior = i;
            }
        }

        printf("\nTotal do estoque: R$ %.2f\n", total);
        printf("Produto com maior valor no estoque: %s (R$ %.2f)\n", estoque[posmaior].nome, maior);

        return 0;
}

