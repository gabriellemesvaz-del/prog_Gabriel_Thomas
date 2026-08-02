#include <stdio.h>
#include <stdlib.h>

int compSelection = 0;
int compQuick = 0;

void selectionSort(int v[], int n) {
    int i, j, menor, temp;

    for (i = 0; i < n - 1; i++) {
        menor = i;

        for (j = i + 1; j < n; j++) {
            compSelection++;

            if (v[j] < v[menor])
                menor = j;
        }

        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        compQuick++;

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
    int v1[1000], v2[1000];

    for (int i = 0; i < 1000; i++) {
        v1[i] = rand() % 1000;
        v2[i] = v1[i];
    }

    selectionSort(v1, 1000);
    quicksort(v2, 0, 999);

    printf("Comparacoes Selection Sort: %d\n", compSelection);
    printf("Comparacoes Quicksort: %d\n", compQuick);

    return 0;
}
