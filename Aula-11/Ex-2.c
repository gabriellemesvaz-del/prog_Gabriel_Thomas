#include <stdio.h>

int comparacoes = 0;

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        comparacoes++;

        if (v[j] <= pivo) {
            i++;

            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quicksort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        quicksort(v, inicio, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    int v[] = {33, 15, 10, 45, 20, 8, 50, 60, 12, 18};
    int n = 10;

    printf("Antes:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    quicksort(v, 0, n - 1);

    printf("\n\nDepois:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    printf("\n\nComparacoes do Quicksort: %d\n", comparacoes);

    return 0;
}
