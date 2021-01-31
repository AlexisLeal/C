#include <stdio.h>
#include <string.h>

int main(){


	char nombre[100];
	char signo[100];


	printf("introduce tu nombre:\n");
	fgets(nombre,100,stdin);

	printf("Introduce tu signo:\n");
	fgets(signo,100,stdin);


	if(strcmp(signo,"aries")==0){ //strcmp compara string y si son iguales da 0 pero si son diferentes da 1

		printf("El nombre es: %s\n",nombre);



	}

	else{

		printf("No es signo correcto\n");
	}






 
return 0;
}