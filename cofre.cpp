#include "stdio.h"

int main() {

	int N, M;

	scanf("%d %d", &N, &M);
	//printf("n=%d m=%d\n", N, M);

    //         codigo
    //              posicao
	int codigos[11][100100];
	for(int i = 0; i <= 10; i++) {
		codigos[i][0] = 0;
	}

	for(int i = 1; i <= N; i++) {
		// copia a linha de cima
		for(int j = 0; j <= 10; j++) {
			codigos[j][i] = codigos[j][i-1];
		}

		int numero;
		scanf("%d", &numero);
		codigos[numero][i]++;

		// for(int j = 0; j <= 9; j++) {
		// 	printf("%d ",codigos[j][i]);
		// }
		// printf("\n");
	}

	int segredo[11] = {0};

	int posicaoAtual = 0;
	for(int i = 0; i < M; i++) {
		int novaPosicao;
		scanf("%d", &novaPosicao);

		if(novaPosicao > posicaoAtual){
			for(int digito = 0; digito <= 9; digito++) {
				segredo[digito] += codigos[digito][novaPosicao];
				segredo[digito] -= codigos[digito][posicaoAtual];
			}
		} else {
			for(int digito = 0; digito <= 9; digito++) {
				segredo[digito] += codigos[digito][posicaoAtual-1];
				segredo[digito] -= codigos[digito][novaPosicao-1];
			}
		}

/*	for(int i=0;i<=9;i++) {
		printf("%d ", segredo[i]);
	}*/
	//printf("\n");

		posicaoAtual = novaPosicao;
	}

	for(int i=0;i<=9;i++) {
		printf("%d ", segredo[i]);
		// if(i != 9) {
			// printf(" ");
		// }
	}
	printf("\n");

	return 0;
}








