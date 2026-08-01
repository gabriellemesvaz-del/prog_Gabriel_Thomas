#include <stdio.h>

int buscaLinear(int v[], int n, int valor) {
    int comparacoes = 0;

    for (int i = 0; i < n; i++) {
        comparacoes++;

        if (v[i] == valor)
            break;
    }

    return comparacoes;
}

int buscaBinaria(int v[], int n, int valor) {
    int inicio = 0;
    int fim = n - 1;
    int comparacoes = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        comparacoes++;

        if (v[meio] == valor)
            break;
        else if (valor < v[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return comparacoes;
}

int main() {
    int v[30];

    for (int i = 0; i < 30; i++) {
        v[i] = i + 1;
    }

    int valor = 30;

    int compLinear = buscaLinear(v, 30, valor);
    int compBinaria = buscaBinaria(v, 30, valor);

    printf("Busca Linear: %d comparacoes\n", compLinear);
    printf("Busca Binaria: %d comparacoes\n", compBinaria);

    return 0;
}
