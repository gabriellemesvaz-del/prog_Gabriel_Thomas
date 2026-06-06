#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("soma: %f\n", somar(num1, num2));
    printf("subtracao: %f\n", subtrair(num1, num2));
    printf("multiplicacao: %f\n", multiplicar(num1, num2));
    if (num2 != 0) {
        printf("divisao: %f\n", dividir(num1, num2));
    } else {
        printf("Erro: Divisao por zero nao e permitida.\n");
    }
    
    return 0;
}
