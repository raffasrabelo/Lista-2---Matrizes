#include <stdio.h>
#include "matrizLib.h"

int main(){
	int n1, m1, n2, m2;
	printf("Indique a quantidade de linhas e colunas da primeira matriz: \n");
	scanf("%d%d", &n1, &m1);
	
	printf("Indique a quantidade de linhas e colunas da segunda matriz: \n");
	scanf("%d%d", &n2, &m2);
	
	int matriz1[100][100], matriz2[100][100];
	if(n1==n2 && m1==m2){	
		geraMatriz(matriz1, n1, m1);
		printMatriz(matriz1, n1, m1);//print na matriz para efeito de conferência de resultado
		
		geraMatriz(matriz2, n2, m2);
		printMatriz(matriz2, n2, m2);
		int i, j;
		for(i=0; i<n1; i++){
			for(j=0; j<m1; j++){
				matriz1[i][j]=matriz1[i][j]+matriz2[i][j];
			}
		
		}
		printf("Resultado :\n");
		printMatriz(matriz1, n1, m1);
		
	}
	else{
		printf("As matrizes indicadas nao sao de mesma ordem, portanto nao foi efetuada a soma.");
	}
	
}
