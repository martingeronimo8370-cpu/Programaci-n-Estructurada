#include<stdio.h>
#include<stdlib.h>
int main(){
	int *numeros;
	int n;
	printf("cuantos elementos deseas guardar?");
	scanf("%d", &n);
	numeros = (int*)malloc(n * sizeof(int));
	if (numeros==NULL){
		printf("ERROR: no se pudo asignar memoria/n");
	}
	for (int i = 0; i < n; i++){
		printf("Elemento %d:", i+1);
		scanf("%d", &numeros[i]);
	}
	printf("datos ingresados:\n");
	for(int i = 0; i < n; i++)
	printf("%d", numeros[i]);
	free(numeros);
	return 0;
}
