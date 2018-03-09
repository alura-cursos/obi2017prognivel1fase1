#include "stdio.h"

int main() {

	int N, M;

	scanf("%d %d", &N, &M);
	printf("n=%d m=%d\n", N, M);

	int codigos[100000];

	for(int i = 0; i < N; i++) {
		scanf("%d", &codigos[i+1]);
	}

	for(int i=0;i<N;i++) {
		printf("%d ", codigos[i]);
	}
	printf("\n");

	int segredo[10] ={0};

	int atual = 1;
	for(int i = 0; i < M; i++) {
		int novaPosicao;
		scanf("%d", &novaPosicao);
		printf("indo para %d\n", novaPosicao);
		if(atual < novaPosicao) {
			for(; atual < novaPosicao; atual++ ) {
				segredo[codigos[atual]]++;
			}
		} else {
			for(; atual > novaPosicao; atual--) {
				segredo[codigos[atual]]++;
			}
		}
	}
	segredo[codigos[atual]]++;

	for(int i = 0; i <= 9; i++) {
		printf("%d ", segredo[i]);
	}
	printf("\n");

	return 0;
}








