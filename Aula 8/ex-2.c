#include <stdio.h>

int potencia(int base, int exp);

int main() {
    int base, exp;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exp);

    printf("Resultado = %d\n", potencia(base, exp));

    return 0;
}

int potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    }

    return base * potencia(base, exp - 1);
}
