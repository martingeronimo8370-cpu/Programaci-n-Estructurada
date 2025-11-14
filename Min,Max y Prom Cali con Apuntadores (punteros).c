//MARTIN ALEJANDRO GERONIMO SANCHEZ
#include <stdio.h>
void calcularEstadisticas(float v[], int n, float *min, float *max, float *prom) {
    *min = v[0];
    *max = v[0];
    float suma = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i]; 
        }
        if (v[i] > *max) {
            *max = v[i];  
        }
        suma += v[i]; 
    }
    *prom = suma / n;
}

int main() {
    int n;
    float califs[10];
    float min, max, prom; 

    printf("Cuantas calificaciones de 3 a 10 ");
    scanf("%d", &n);

    if (n < 3 || n > 10) {
        printf("Numero invalido de calificaciones\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Calificacion %d: ", i + 1);
        scanf("%f", &califs[i]);
    }

    calcularEstadisticas(califs, n, &min, &max, &prom);

    printf("\n Estadisticas \n");
    printf("Minima    %.2f\n", min);
    printf("Maxima    %.2f\n", max);
    printf("Promedio  %.2f\n", prom);

    return 0;
}
