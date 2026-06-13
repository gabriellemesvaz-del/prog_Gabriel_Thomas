#include <stdio.h>

struct produto {
    char nome[50];
    float preco;
    int quantidade;
};
int main() {
    struct produto p;

    printf("Digite o nome do produto: ");
    scanf("%s", p.nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &p.quantidade);

    printf("\nnome: %s\n", p.nome);
    printf("Preço: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
    printf("Valor total em estoque: %.2f\n", p.preco * p.quantidade);

    return 0;
}
