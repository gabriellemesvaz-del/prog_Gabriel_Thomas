#include <stdio.h>
struct produto{
    char nome[50];
    float preco;
    int quantidade;
};
int main(){
    struct produto p;

    printf("Digite o nome do produto: ");
    scanf("%s", p.nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &p.preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &p.quantidade);

    printf("Produto: %s\n", p.nome);
    printf("Preço: R$ %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);

    float total, desconto;
    total= p.preco * p.quantidade;
    desconto = total * 0.9;
    
    printf("\nproduto: %s\n", p.nome);
    printf("Total: R$ %.2f\n", total);
    printf("valor com desconto: R$ %.2f\n", desconto);
    return 0;
}
