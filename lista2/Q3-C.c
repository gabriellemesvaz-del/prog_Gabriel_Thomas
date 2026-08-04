#include <stdio.h>

int Palindromo(char s[], int ini, int fim)
{
    if (ini >= fim)
        return 1;

    if (s[ini] != s[fim])
        return 0;

    return Palindromo(s, ini + 1, fim - 1);
}

int main()
{
    char palavra[100];
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (palavra[i] != '\0')
    {
        i++;
    }

    if (Palindromo(palavra, 0, i - 1))
        printf("é palindromo.\n");
    else
        printf("Nao é palindromo.\n");

    return 0;
}
