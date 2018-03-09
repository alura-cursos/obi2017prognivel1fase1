#include "stdio.h"

int main() {

	int N, M;

	scanf("%d %d", &N, &M);
	//printf("n=%d m=%d\n", N, M);

	int codigos[100101];

	for(int i = 1; i <= N; i++) {
		scanf("%d", &codigos[i]);
	}

	/*for(int i=1;i<=N;i++) {
		printf("%d ", codigos[i]);
	}
	printf("\n");*/

	int segredo[20] = {0};

	int posicaoAtual = 1;

	for(int i = 0; i < M; i++) {
		int novaPosicao;
		scanf("%d", &novaPosicao);
		//printf("indo para %d\n", novaPosicao);

		if( posicaoAtual < novaPosicao) {
			 // anda pra direita?
			for(; posicaoAtual < novaPosicao; posicaoAtual++) {
				int numero = codigos[posicaoAtual];
				segredo[numero]++;
			}
		} else {
			// anda pra esquerda
			for(; novaPosicao < posicaoAtual; posicaoAtual--) {
				int numero = codigos[posicaoAtual];
				segredo[numero]++;
			}
		}

		/*for(int i = 0; i <= 9; i++) {
		printf("%d ", segredo[i]);
	}
	printf("\n");*/

	}
	
	int numero = codigos[posicaoAtual];
	segredo[numero]++;


	for(int i = 0; i <= 9; i++) {
		printf("%d ", segredo[i]);
	}
	printf("\n");

	return 0;
}








