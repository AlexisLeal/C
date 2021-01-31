// Operador ? 


#include <stdio.h>



int main(){

	int numero;

	printf("Introduce un numero\n");
	scanf("%i",&numero);

	(numero % 2 == 0) ? printf("el numero es par\n") : printf("El numero es impar \n");
					// Si se cumple pasa esta linea sino es esta linera  



	(numero % 2 == 0) ? funcion1() : funcion2(); 

	// Principalmente para funciones 




	return 0;
}