#include <stdio.h>
#include <string.h>
#include "matrizLib.h"

int main(){
	int n, m;
	
	printf("Digite a quantidade de linhas e colunas da sua matriz, respectivamente: ");
	scanf("%d%d", &n, &m);
	int matriz[100][100];	
	geraMatriz(matriz, n, m);
	printMatriz(matriz, n, m);
	int i, j, maior=matriz[0][0];
	for (i=0; i<n; i++){
		for (j=1; j<m; j++){
			if (maior<matriz[i][j])
				maior=matriz[i][j];
		}
	}
	
	printf("O maior numero da matriz eh: %d", maior);
	return 0;	
}
	
