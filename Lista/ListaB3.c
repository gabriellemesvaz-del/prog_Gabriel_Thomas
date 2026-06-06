#include <stdio.h>

struct jogador {
    char nome[50];
    int pontos;
};

int main() {
    int N, i;
    float media, total = 0;
    int maior = 0;

    printf("Digite o numero de jogadores: ");
    scanf("%d", &N);

    struct jogador j[N];

    for (i = 0; i < N; i++) {
        printf("Digite o nome do jogador: ");
        scanf("%s", j[i].nome);
        printf("Digite os pontos do jogador: ");
        scanf("%d", &j[i].pontos);
    }

    int menor=0;

    for (i = 0; i < N; i++) {

        if (j[i].pontos > j[maior].pontos) {
            maior = i;
        }
        if (j[i].pontos < j[menor].pontos) {
            menor = i;
        }
    }
    printf("\nJogador com mais pontos: %s (%d pontos)\n", j[maior].nome, j[maior].pontos);
    printf("Jogador com menos pontos: %s (%d pontos)\n", j[menor].nome, j[menor].pontos);
    
    return 0;
}
