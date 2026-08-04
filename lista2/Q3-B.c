#include <stdio.h>

int contarChar(char s[], int i, char c) {
    if (s[i] == '\0')
        return 0;

    if (s[i] == c)
        return 1 + contarChar(s, i + 1, c);

    return contarChar(s, i + 1, c);
}

int main() {
    char s[100];
    char c;

    printf("Digite uma palavra: ");
    scanf("%s", s);

    printf("Digite o caractere: ");
    scanf(" %c", &c);

    printf("Quantidade de '%c': %d\n", c, contarChar(s, 0, c));

    return 0;
}
