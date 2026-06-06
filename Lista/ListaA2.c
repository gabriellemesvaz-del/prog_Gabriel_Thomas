#include <stdio.h>
struct Placar{
char time1[50];
char time2[50];
int golsdotime1;
int golsdotime2;


};

int main(){
struct Placar jogo;

printf("Digite o nome do time 1: ");
scanf("%s", jogo.time1);
printf("Digite o nome do time 2: ");
scanf("%s", jogo.time2);
printf("Digite o número de gols do time 1: ");
scanf("%d", &jogo.golsdotime1);
printf("Digite o número de gols do time 2: ");
scanf("%d", &jogo.golsdotime2);

printf("Placar do jogo:\n");
printf("%s: %d gols\n", jogo.time1, jogo.golsdotime1);
printf("%s: %d gols\n", jogo.time2, jogo.golsdotime2);

if (jogo.golsdotime1 > jogo.golsdotime2) {
    printf("O vencedor é: %s\n", jogo.time1);
} else if (jogo.golsdotime2 > jogo.golsdotime1) {
    printf("O vencedor é: %s\n", jogo.time2);
} else {
    printf("EMPATE.\n");
}
return 0;
}
