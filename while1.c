#include <stdio.h>


int main(){

	int n,cont,suma=0;

	printf("Introduce los numeroa a sumar\n");
	scanf("%i",&n);

	while(cont <= n){
		suma += cont;

		cont++;


	}

	printf("%i\n",suma);
	return 0;
}