#include <stdio.h>

int fibonacci(int n);

int main() {
    int i;

    printf("Primeiros 10 termos da sequencia de Fibonacci:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    }

    if (n == 1) {
        return 1; 
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
