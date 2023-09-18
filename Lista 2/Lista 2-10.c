#include <stdio.h>


int main(){
	int matriz[100][100], i, j, nRaios, x, y, contRaios=0;
	
	printf("Digite o numero de registros de raios no relatorio: ");
	scanf("%d", &nRaios);
	
	for(i=0; i<20; i++){
		for(j=0; j<20; j++)
			matriz[i][j]=0;	//zerando a matriz criada
	}
	
	printf("Digite as coordenadas X e Y de cada um dos %d raios.\n", nRaios);
	for(i=0; i<nRaios; i++){
		scanf("%d %d", &x, &y);
		matriz[x][y]++;
	}
	
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			if(matriz[i][j]>1){
				contRaios++;
				break;
			}
		}
	}
	printf("%d", contRaios);
	
	return 0;
}
