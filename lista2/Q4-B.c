#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == alvo)
            return meio;

        if (alvo < v[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return -1;
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = 5;
    int alvo;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &alvo);

    int resultado = buscaBinaria(v, n, alvo);

    if (resultado != -1)
        printf("Valor encontrado no indice %d.\n", resultado);
    else
        printf("Valor nao encontrado.\n");

    return 0;
}
