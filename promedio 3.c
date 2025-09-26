//Martin Alejandro Geronimo Sanchez                26/09/2025
// Solo puede correr en C por el system("color")
#include<stdio.h>
int main (){
int	num1;
int	num2;
int	num3;
	printf("ingresa numero 1:");
	system("color 50" );
	scanf("%i",&num1);
	printf("ingresa numero 2:");
	system("color 21" );
	scanf("%i",&num2);
	printf("ingresa numero 3:");
	system("color 40" );
	scanf("%i",&num3);
	float operacion = (num1 + num2+ num3) / 3;
	system("cls" );
	printf("el resultado es: %f\n",operacion);
	system("color 47" );
	return 999;
}
