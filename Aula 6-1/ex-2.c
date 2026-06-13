#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    int n, i;
    int maiorEstoque = 0, menorPreco = 0;
    float valor, totalGeral = 0;

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

        if (p[i].preco < p[menorPreco].preco) {
            menorPreco = i;
        }
    }

    printf("\nProduto\tPreco\tQtd\tValor em Estoque\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        valor = p[i].preco * p[i].quantidade;

        printf("%s\tR$%.2f\t%d\tR$%.2f\n",
               p[i].nome,
               p[i].preco,
               p[i].quantidade,
               valor);

        totalGeral += valor;

        if (valor >
            p[maiorEstoque].preco * p[maiorEstoque].quantidade) {
            maiorEstoque = i;
        }
    }

    printf("-------------------------------------------------\n");

    printf("Produto com maior valor em estoque: %s (R$%.2f)\n",
           p[maiorEstoque].nome,
           p[maiorEstoque].preco * p[maiorEstoque].quantidade);

    printf("Produto com menor preco unitario: %s (R$%.2f)\n",
           p[menorPreco].nome,
           p[menorPreco].preco);

    printf("Valor total geral do estoque: R$%.2f\n",
           totalGeral);

    return 0;
}
