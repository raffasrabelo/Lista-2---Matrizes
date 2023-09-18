#include <stdio.h>
#include "matrizLib.h"

int main(){
	int n, m;
	printf("Indique quantas linhas e colunas terá sua matriz: \n");
	scanf("%d", &n);
	scanf("%d", &m);
	int matriz[100][100];
	geraMatriz(matriz, n, m);
	printMatriz(matriz, n, m); // print apenas para ter como base de comparação
	
	int i=0, j=0;
	for(i=0; i<n; i++){
		for(j=m-1; j>=0; j--){
			if(i+j==n-1)
				printf("%3d |", matriz[i][j]);
		}
	}
	
	return 0;
}
