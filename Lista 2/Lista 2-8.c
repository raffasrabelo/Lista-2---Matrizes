#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gerarMatriz(float m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%100;
} //  fim gera

void printarMatriz(float m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%4.1f |",m[i][j]);
	  printf("\n");	   
	}// fim for i
	printf("\n");
} //  fim print

void somaMatriz(float m1[][100], float m2[][100], float m3[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m3[i][j]=m1[i][j] + m2[i][j];
		}
	}
}
void multMatriz(float m1[][100], float m2[][100], float m3[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m3[i][j]=m1[i][j] * m2[i][j];
		}
	}
}

void somaConst(float m1[][100], int linhas, int cols, float cons){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m1[i][j]+=cons;
		}
	}
}

int main(){
	int linhas, cols, i, opcao=-1;
	float mat1[100][100], mat2[100][100], mat3[100][100], cons=0;
	printf("Digite a quantidade de linhas e colunas das suas matrizes: ");
	scanf("%d %d", &linhas, &cols);
	
	gerarMatriz(mat1, linhas, cols);
	printf("Matriz1:\n");
	printarMatriz(mat1, linhas, cols);
	sleep(1);
	
	gerarMatriz(mat2, linhas, cols);
	printf("Matriz2:\n");
	printarMatriz(mat2, linhas, cols);
	
	do{
		printf("Escolha uma opcao: \n(1)Somar matrizes\n(2)Multiplicar Matrizes\n(3)Adicionar uma constante as duas matrizes\n(4)Imprimir Matrizes\n(0)Sair\n");
		scanf("%d", &opcao);		
		switch(opcao){
			case 1:
				somaMatriz(mat1, mat2, mat3, linhas, cols);
			break;	
			case 2:
				multMatriz(mat1, mat2, mat3, linhas, cols);
			break;
			case 3: 
				printf("Digite a constante a ser adicionada as matrizes: ");
				scanf("%f", &cons);
				somaConst(mat1, linhas, cols, cons);
				somaConst(mat2, linhas, cols, cons);
			break;
			case 4:
				printf("Matriz 1:\n");
				printarMatriz(mat1, linhas, cols);
				printf("Matriz 2:\n");
				printarMatriz(mat2, linhas, cols);
				printf("Matriz 3:\n");
				printarMatriz(mat3, linhas, cols);
			break;
			case 0:
				printf("Programa encerrado.");
			break;
		}
	} while (opcao!=0);
	
	return 0;
}
