#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;

 };

 int main(){
    struct Pessoa p;

    printf("Digite o seu nome ");
    scanf("%s", p.nome);
    printf("Digite a sua idade ");
    scanf("%d", &p.idade);
    printf("Digite a sua altura ");
    scanf("%f", &p.altura);
    
    printf("-----Ficha da Pessoa------\n");
    
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    
    return 0;
 }
