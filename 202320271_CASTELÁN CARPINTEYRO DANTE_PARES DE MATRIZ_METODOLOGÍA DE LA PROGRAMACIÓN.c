#include <stdio.h>
// Arreglo de coordenadas de pares
int main(int argc, char *argv[]) {
	int matriz[100][100], n, contador = 0, pares[10000][2];
	
	printf("Por favor, ingrese el valor de n:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Por favor, ingrese el valor de [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]%2 == 0){
				pares[contador][0] = i;
				pares[contador][1] = j;
				contador++;
			}
		}
	}
	printf("Los números pares están en:\n");
	for(int i = 0; i<contador; i++){
		printf("[%d, %d]\n", pares[i][0], pares[i][1]);
	}

	return 0;
}
