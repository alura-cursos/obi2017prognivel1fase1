#include "stdio.h"

int main() {
	int C, A;

	scanf("%d %d", &C, &A);

	int capacidadeDeAlunos = C - 1;
	int numeroDeViagens = A / capacidadeDeAlunos;
	int resto = A % capacidadeDeAlunos;

	if( resto > 0) numeroDeViagens++;

	printf("%d\n", numeroDeViagens);

	return 0;
}