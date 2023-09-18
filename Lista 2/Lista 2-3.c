#include <stdio.h>
#include <string.h>
#include "matrizLib.h"

int main(){
	int n, m;
	
	printf("Digite a quantidade de linhas e colunas da sua matriz, respectivamente: ");
	scanf("%d%d", &n, &m);
	
	int matriz[100][100], x, i, j, cont=0;	

	printf("Digite o numero do qual voce quer contar as ocorrencias na matriz: ");
	scanf("%d", &x);	
	geraMatriz(matriz, n, m);
	printMatriz(matriz, n, m);

	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(matriz[i][j]==x)
			cont++;
		}
	}
	if(cont==0)
		printf("O numero %d não aparece nenhuma vez na matriz.", x);
	else 
		printf("O numero %d se repetiu %d vezes na matriz.", x, cont);
	
	return 0;
}
