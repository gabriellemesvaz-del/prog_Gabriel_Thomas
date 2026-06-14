#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
    float totalEstoque;
} Produto;

void lerProdutos(Produto est[], int n);
void calcularEstoque(Produto est[], int n);
void imprimirEstoque(Produto est[], int n);
int encontrarMaiorEstoque(Produto est[], int n);
int encontrarMenorPreco(Produto est[], int n);

int main() {
    int n, maior, menor;

    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    Produto est[n];

    lerProdutos(est, n);
    calcularEstoque(est, n);
    imprimirEstoque(est, n);

    maior = encontrarMaiorEstoque(est, n);
    menor = encontrarMenorPreco(est, n);

    printf("\nProduto com maior valor em estoque: %s\n",
           est[maior].nome);

    printf("Produto com menor preco: %s\n",
           est[menor].nome);

    return 0;
}

void lerProdutos(Produto est[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", est[i].nome);

        printf("Preco: ");
        scanf("%f", &est[i].preco);

        printf("Quantidade: ");
        scanf("%d", &est[i].quantidade);
    }
}

void calcularEstoque(Produto est[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        est[i].totalEstoque =
            est[i].preco * est[i].quantidade;
    }
}

void imprimirEstoque(Produto est[], int n) {
    int i;
    float totalGeral = 0;

    printf("\n=== ESTOQUE ===\n");

    printf("%-20s %-10s %-10s %-10s\n",
           "Nome", "Preco", "Qtd", "Total");

    for (i = 0; i < n; i++) {
        printf("%-20s %-10.2f %-10d %-10.2f\n",
               est[i].nome,
               est[i].preco,
               est[i].quantidade,
               est[i].totalEstoque);

        totalGeral += est[i].totalEstoque;
    }

    printf("\nValor total do estoque: R$ %.2f\n",
           totalGeral);
}

int encontrarMaiorEstoque(Produto est[], int n) {
    int i, maior = 0;

    for (i = 1; i < n; i++) {
        if (est[i].totalEstoque >
            est[maior].totalEstoque) {
            maior = i;
        }
    }

    return maior;
}

int encontrarMenorPreco(Produto est[], int n) {
    int i, menor = 0;

    for (i = 1; i < n; i++) {
        if (est[i].preco <
            est[menor].preco) {
            menor = i;
        }
    }

    return menor;
}
