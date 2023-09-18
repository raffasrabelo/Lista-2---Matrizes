#include <stdio.h>
#include "matrizLib.h"

int main(){
	int n, m, mult;
	printf("Indique quantas linhas e colunas terá sua matriz: \n");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("Qual eh o numero pelo qual voce quer multiplicar sua matriz?\n");
	scanf("%d", &mult);
	int matriz[100][100], i, j;
	geraMatriz(matriz, n, m);
	printf("Matriz gerada:\n");
	printMatriz(matriz, n, m); // print apenas para ter como base de comparação
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			matriz[i][j]=matriz[i][j]*mult;
		}
	}
	printf("Resultado (multiplicada por %d):\n", mult);
	printMatriz(matriz, n, m);
	
	return 0;
}
