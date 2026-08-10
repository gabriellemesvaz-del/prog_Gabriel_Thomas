#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0)
        return 0;

    return v[0] + somaVetor(v + 1, n - 1);
}

int main() {
    int v[] = {2, 4, 6, 8};
    int n = 4;

    printf("Soma = %d\n", somaVetor(v, n));

    return 0;
}
//qual é o caso-base deste problema?: 
// resposta:O caso-base é n == 0, pois quando não há mais elementos no vetor, a função retorna 0.
