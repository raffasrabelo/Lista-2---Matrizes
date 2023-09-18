#include <stdio.h>
#include <string.h>
#include "matrizLib.h"

int main(){
	int n, m;
	
	printf("Digite a quantidade de linhas e colunas da sua matriz, respectivamente: ");
	scanf("%d%d", &n, &m);
	
	int matriz[100][100], i, j;	

	geraMatriz(matriz, n, m);
	printMatriz(matriz, n, m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(i==j)
				printf("%3d | ", matriz[i][j]);
		}			
	}
	
return 0;
}
