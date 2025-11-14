#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void formula() {
	
    int n, k;
    scanf("%d %d", &n, &k);
    char* s = (char*)malloc(sizeof(char) * (n + 1));
    scanf("%s", s);
    
    int* estado = (int*)malloc(sizeof(int) * n);
    
    int* decisiones = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'S') {
            estado[i] = 1;
        } else {
            estado[i] = 0;
        }
    }

    int movimientos = 0;
    int efecto_giro = 0; 

   
    for (int i = 0; i < n; ++i) {
        
        if (i >= k) {
            efecto_giro -= decisiones[i - k];
        }

        
        int estado_actual = (estado[i] + efecto_giro) % 2;

        
        if (estado_actual == 1) {
            
            if (i > n - k) {
                printf("-1\n");
               
                free(s);
                free(estado);
                free(decisiones);
                return;
            }
            
            decisiones[i] = 1;
            movimientos++;
        }
        
        
        efecto_giro += decisiones[i];
    }

    printf("%d\n", movimientos);

  
    free(s);
    free(estado);
    free(decisiones);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        formula();
    }
    return 0;
}
