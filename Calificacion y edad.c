#include<stdio.h>
#include<stdlib.h>

int main(){
	int calificacion;
	int edad; 
	printf("ingrese calificacion:");
	scanf("%i",&calificacion);
	printf("ingrese edad:");
	scanf("%i",&edad);
	 if (edad <0) {
                printf("edad no valida\n");
            }
            if (calificacion <0) {
                printf("calificacion no valida\n");
            }
	 if (calificacion >=60) {
                printf("aprobado\n");
            } else {
                printf("No aprobado\n");
                
            }
          
     if (edad >=18) {
                printf("mayor edad\n");
            } else {
                printf("menor edad\n");
            }
            
    return 0;
}
