#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    int n, i, maior = 0;
    float total, totalGeral = 0;

    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    struct Produto p[n];
  
    for (i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", p[i].nome);

        printf("Preco: ");
        scanf("%f", &p[i].preco);

        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);
    }

    printf("\nProduto\tPreco\tQtd\tTotal\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        total = p[i].preco * p[i].quantidade;

        printf("%s\tR$%.2f\t%d\tR$%.2f\n",
               p[i].nome,
               p[i].preco,
               p[i].quantidade,
               total);

        totalGeral += total;

        if (total > p[maior].preco * p[maior].quantidade) {
            maior = i;
        }
    }

    printf("-------------------------------------------------\n");
    printf("Total geral: R$%.2f\n", totalGeral);

    total = p[maior].preco * p[maior].quantidade;
    printf("Maior estoque: %s (R$%.2f)\n",
           p[maior].nome,
           total);

    return 0;
}
