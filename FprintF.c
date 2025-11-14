#include<stdio.h>

int main(){
	FILE *f = fopen(" salida.txt", "w");
	char linea[200];
	
	if(f == NULL){
		printf("ERROR al abrir el archivo.\n");
		return 1;
	}
	
	while(fgets(linea, 200, f) != NULL)
	printf("%s", linea);
//	fprintf(f, "hola mundo. \n");
//	fprintf(f, "este archivo fue creado desde C.\n");
	
	fclose(f);
	return 0;
	
}
