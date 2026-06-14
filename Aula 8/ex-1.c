#include <stdio.h>

int soma(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Soma = %d\n", soma(n));

    return 0;
}

int soma(int n) {
    if (n == 0) {
        return 0; 
    }

    return n + soma(n - 1);
}

