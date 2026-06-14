#include <stdio.h>

typedef struct {
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int pontos;
} Time;

// Protótipos
void lerTimes(Time times[], int n);
void calcularPontos(Time times[], int n);
void imprimirClassificacao(Time times[], int n);
int encontrarLider(Time times[], int n);

int main() {
    int n, lider;

    printf("Quantidade de times: ");
    scanf("%d", &n);

    Time times[n];

    lerTimes(times, n);
    calcularPontos(times, n);
    imprimirClassificacao(times, n);

    lider = encontrarLider(times, n);

    printf("\nLider do torneio: %s (%d pontos)\n",
           times[lider].nome,
           times[lider].pontos);

    return 0;
}

void lerTimes(Time times[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\nTime %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", times[i].nome);

        printf("Vitorias: ");
        scanf("%d", &times[i].vitorias);

        printf("Empates: ");
        scanf("%d", &times[i].empates);

        printf("Derrotas: ");
        scanf("%d", &times[i].derrotas);
    }
}

void calcularPontos(Time times[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        times[i].pontos =
            (times[i].vitorias * 3) +
            times[i].empates;
    }
}

void imprimirClassificacao(Time times[], int n) {
    int i;

    printf("\n=== CLASSIFICACAO ===\n");
    printf("%-20s %-5s %-5s %-5s %-7s\n",
           "Time", "V", "E", "D", "Pontos");

    for (i = 0; i < n; i++) {
        printf("%-20s %-5d %-5d %-5d %-7d\n",
               times[i].nome,
               times[i].vitorias,
               times[i].empates,
               times[i].derrotas,
               times[i].pontos);
    }
}

int encontrarLider(Time times[], int n) {
    int i, lider = 0;

    for (i = 1; i < n; i++) {
        if (times[i].pontos > times[lider].pontos) {
            lider = i;
        }
    }

    return lider;
}
