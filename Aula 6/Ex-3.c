#include <stdio.h>

struct aluno {
	char nome[50];
	float nota;
};

int main() {
	int n, i;

	printf("Digite o numero de alunos: ");
	scanf("%d", &n);

	struct aluno turma[n];

	for (i = 0; i < n; i++) {
		printf("Digite o nome do aluno %d: ", i + 1);
		scanf("%s", turma[i].nome);
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%f", &turma[i].nota);
}
		int maior = 0, menor = 0;

		for (i = 1; i < n; i++) {
			if (turma[i].nota > turma[maior].nota) {
				maior = i;
			}
		}

		printf("\naluno com maior nota:\n");
		printf("nome: %s\n", turma[maior].nome);
		printf("nota: %.2f\n", turma[maior].nota);

		printf("\naluno com menor nota:\n");
		for (i = 1; i < n; i++) {
			if (turma[i].nota < turma[menor].nota) {
				menor = i;
			}
		}
		printf("nome: %s\n", turma[menor].nome);
		printf("nota: %.2f\n", turma[menor].nota);

		return 0;
	}
