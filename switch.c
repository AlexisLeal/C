// Setencias Switch()

/*

switch (selector) { El selector debe ser del tipo int o char solamnete 

case etiqueta1 : sentencia1; break; siempre debe llevar un break 
case etiqueta2 : sentencia2; break;
case etiqueta3 : sentencia3; break;
case etiqueta4 : sentencia4; break;
default: sentencia; este viende siento como un else 
}
*/

#include <stdio.h>

int main(){
	int numero;

	printf("Digite un numero del 1-3\n");
	scanf("%i",&numero);


	switch(numero){
		case 1: printf("Es es el numero 1\n");
		break;
		case 2: printf("Es el numero 2\n");
		break;
		case 3: printf("Es el numero 3\n");
		break;
		default: printf("No ha digitado un numero correcto\n");
	}


	return 0;
}