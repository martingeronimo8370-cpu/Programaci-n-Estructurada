//MARTIN ALEJANDRO GERONIMO SANCHEZ
#include<stdio.h>
int main(){
	
int	a = 0;
int b[10];
int c = 562;
int d = 564;
int e = 568;
int f = 678;
int g = 876;
int h = 465;
float i = 34.44;
double j= 3345556;
long k = 334556677;
//int l[3][3]={0,1,2,10,11,12,20,21,22};
int l[3][3]={{0,1,2},
            {10,11,12},
            {20,21,22}};
int m;
int n ;       
    printf("%d La direccion de a es:\n",&a);
	printf("%d La direccion de b es:\n",&b[2]);
	printf("%d la direccion de [2][1]\n",l[2][1]);
	// FILA/COLUMNA
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("[%d]\t",l[m][n]);
		}
		printf("\n");
		printf("\n");
	}
	
	printf("%d\n",&b[10]);
	printf("%d\n",&b[9]);
	printf("%d\n",&b[8]);
	printf("%d\n",&b[7]);
	printf("%d\n",&b[6]);
	printf("%d\n",&b[5]);
	printf("%d\n",&b[4]);
	printf("%d\n",&b[3]);
	printf("%d\n",&b[2]);
	printf("%d\n",&b[1]);
	printf("%d\n",&b[0]);	
	printf("%d\n",&c);
	printf("%d\n",&d);
	printf("%d\n",&e);
	printf("%d\n",&f);
	printf("%d\n",&g);
	printf("%d\n",&h);
	printf("%f\n",&i);
	printf("%s\n",&j);
	printf("%l\n",&k);
	
	return 999;
}
