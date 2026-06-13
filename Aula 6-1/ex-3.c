#include <stdio.h>

struct Jogador {
    char nome[50];
    int pontos;
    int vitorias;
};

int main() {
    int n, i;
    int maisPontos = 0, maisVitorias = 0;
    int somaVitorias = 0, acimaMedia = 0;
    float mediaVitorias;

    printf("Quantidade de jogadores: ");
    scanf("%d", &n);

    struct Jogador j[n];

    for (i = 0; i < n; i++) {
        printf("\nJogador %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", j[i].nome);

        printf("Pontos: ");
        scanf("%d", &j[i].pontos);

        printf("Vitorias: ");
        scanf("%d", &j[i].vitorias);

        somaVitorias += j[i].vitorias;

        if (j[i].pontos > j[maisPontos].pontos) {
            maisPontos = i;
        }
      
        if (j[i].vitorias > j[maisVitorias].vitorias) {
            maisVitorias = i;
        }
    }

    mediaVitorias = (float)somaVitorias / n;

    for (i = 0; i < n; i++) {
        if (j[i].vitorias > mediaVitorias) {
            acimaMedia++;
        }
    }

    printf("\nNome\t\tPontos\tVitorias\n");
    printf("------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%s\t\t%d\t%d\n",
               j[i].nome,
               j[i].pontos,
               j[i].vitorias);
    }

    printf("------------------------------------\n");

    printf("Jogador com mais pontos: %s (%d pontos)\n",
           j[maisPontos].nome,
           j[maisPontos].pontos);

    printf("Jogador com mais vitorias: %s (%d vitorias)\n",
           j[maisVitorias].nome,
           j[maisVitorias].vitorias);

    printf("Media de vitorias: %.2f\n", mediaVitorias);

    printf("Jogadores acima da media de vitorias: %d\n",
           acimaMedia);

    return 0;
}
