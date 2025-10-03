#include <stdio.h>

int main() {

    int opcion;
    int x = 0;
    int a[6] = {1, 2, 0, 0, 3, 2};
	int b[15];
	int datosIngresados = 0; 
    do {
        printf("MENU\n");
        printf("1. Ver marcadores iniciales\n");
        printf("2. Calcular promedio de marcadores iniciales\n");
        printf("3. Ingresar nuevos marcadores\n");
        printf("4. Calcular promedio de nuevos marcadores\n");
        printf("5. Buscar marcador por posicion\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf(" Marcadores Iniciales\n");
                for (int i = 0; i < 6; i++) {
                    printf("Marcador %d: %d\n", i + 1, a[i]);
                }
                break;
            case 2: { 
                printf("Promedio de Marcadores Iniciales\n");
                int suma = 0;
                for (int i = 0; i < 6; i++) {
                    suma = suma + a[i];
                }
                float promedio = suma / 6.0;
                printf("El promedio es: %.2f\n", promedio);
                break;
            }
            case 3:
                printf("\nIngresar Nuevos Marcadores\n");
                printf("Cuantos partidos quieres guardar? max 15\n");
                scanf("%d", &x);

               
                if (x > 0 && x <= 15) {
                    for (int i = 0; i < x; i++) {
                        printf("Escribe el marcador %d: ", i + 1);
                        scanf("%d", &b[i]);
                    }
                    datosIngresados = 1; 
                    printf("guardado\n");
                } else {
                    printf("Cantidad no valida.\n");
                }
                break;
            case 4: {
                printf("\n Promedio de Nuevos Marcadores\n");
                if (datosIngresados == 1) {
                    int suma2 = 0;
                    
                    for (int i = 0; i < x; i++) {
                        suma2 = suma2 + b[i];
                    }
                    
                    float promedio2 = (float)suma2 / x;
                    printf("El promedio de los %d partidos es: %.2f\n", x, promedio2);
                } else {
                    printf("Error\n");
                }
                break;
            }
            case 5:
                printf("\n--- Buscar Marcador por Posicion ---\n");
                if (datosIngresados == 1) {
                    int posicion;
                    printf("Que posicion quieres ver (desde 0 hasta %d)? ", x - 1  );
                    scanf("%d", &posicion);

                    
                    if (posicion >= 0 && posicion < x) {
                        printf("En la posicion %d esta el numero: %d\n", posicion, b[posicion-1]);
                    } else {
                        printf("Esa posicion no existe.\n");
                    }
                } else {
                    printf("Error\n");
                }
                break;
            case 6:
                printf("bye\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while (opcion != 6); 

    return 0;
}
