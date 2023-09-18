#include <stdio.h>
#include <windows.h>
#include "matrizLib.h"
void printMatriz1(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}// fim for i
	printf("\n");
} //  fim print

void geraMatriz1(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%100;
} //  fim gera

int main(){
	int i, j, matriz1[2][100], matriz2[3][100];
	printf("Entre com a primeira matriz (2x3):\n");
	leiaMatriz(matriz1, 2, 3);
	printf("Matriz1:\n");
	printMatriz1(matriz1, 2, 3);
	printf("Entre com a segunda matriz (3x2):\n");
	leiaMatriz(matriz2, 3, 2);
	printf("Matriz2:\n");
	printMatriz1(matriz2, 3, 2);
	
	int matrizProd[2][100], result=0; //declarando a matriz produto
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			result+=matriz1[i][j] * matriz2[j][0];
		}
		matrizProd[i][0]=result;
		result=0;
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			result+=matriz1[i][j] * matriz2[j][1];
		}
		matrizProd[i][1]=result;
		result=0;
	}
	printf("A matriz resultante eh: \n");
	printMatriz1(matrizProd, 2, 2);
	return 0;
}
