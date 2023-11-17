#include <stdio.h>
// Impresión inversa de matriz
int main(int argc, char *argv[]) {
	int matriz[100][100], n;
	
	printf("Por favor, ingrese el valor de n:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Por favor, ingrese el valor de [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(int i=(n-1); i>=0; i--){
		for(int j=(n-1); j>=0; j--){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
