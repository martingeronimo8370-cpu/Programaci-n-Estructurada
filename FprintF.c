#include<stdio.h>

int main(){
	FILE *f = fopen(" salida.txt", "w");
	if(f == NULL){
		printf("ERROR al abrir el archivo.\n");
		return 1;
	}
	fprintf(f, "hola mundo. \n");
	fprintf(f, "este archivo fue creado desde C.\n");
	
	fclose(f);
	return 0;
	
}
