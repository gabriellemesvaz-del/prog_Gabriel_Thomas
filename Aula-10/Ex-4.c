#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("1 - Usuario adivinha\n");
    printf("2 - Computador adivinha\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        int numero, chute, tentativas = 0;

        numero = rand() % 100 + 1;

        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &chute);

        while (chute != numero)
        {
            tentativas++;

            if (chute < numero)
                printf("Maior!\n");
            else
                printf("Menor!\n");

            printf("Digite outro numero: ");
            scanf("%d", &chute);
        }

        tentativas++;
        printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
    }
    else if (opcao == 2)
    {
        int inicio = 1, fim = 100, meio;
        int tentativas = 0;
        char resposta;

        printf("\nPense em um numero de 1 a 100.\n");
        printf("Responda com:\n");
        printf("m = meu numero e maior\n");
        printf("n = meu numero e menor\n");
        printf("c = correto\n");

        while (inicio <= fim)
        {
            meio = (inicio + fim) / 2;
            tentativas++;

            printf("\nO numero e %d? ", meio);
            scanf(" %c", &resposta);

            if (resposta == 'c')
            {
                printf("Acertei em %d tentativas!\n", tentativas);
                break;
            }#
            else if (resposta == 'm')
            {
                inicio = meio + 1;
            }
            else if (resposta == 'n')
            {
                fim = meio - 1;
            }
            else
            {
                printf("Resposta invalida!\n");
            }
        }
    }
    else
    {
        printf("Opcao invalida!\n");
    }

    return 0;
}
