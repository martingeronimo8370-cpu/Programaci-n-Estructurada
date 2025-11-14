#include<stdio.h>
#include<stdlib.h>

int cuenta(int n ){
	if (n==0) return 0;
	printf("Entrando con %d\n",n);
	int r = cuenta(n-1);
	printf("saliendo con %d\n");
	return r;
}
int main(){
	cuenta(6);
}
