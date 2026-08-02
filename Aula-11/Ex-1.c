#include <stdio.h>

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
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

void quicksort(int v[], int inicio, int fim, int n) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        printf("Depois do particionamento: ");
        imprimir(v, n);

        quicksort(v, inicio, p - 1, n);
        quicksort(v, p + 1, fim, n);
    }
}

int main() {
    int v[] = {33, 15, 10, 45, 20, 8, 50};
    int n = 7;

    printf("Antes: ");
    imprimir(v, n);

    quicksort(v, 0, n - 1, n);

    printf("Depois: ");
    imprimir(v, n);

    return 0;
}
