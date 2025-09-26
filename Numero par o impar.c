#include<stdio.h>

int main() {
    int numero;
    int op; 

    printf("Escriba un numero: ");
    scanf("%d", &numero);

    printf("Escribe opcion: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            
            if (numero % 2 == 0) {
                printf("Es par");
            } else {
                printf("No es par");
            }
            break;

        default: 
            printf("No se escogio opcion valida"); 
            break;
    }
    
    return 0;
}
