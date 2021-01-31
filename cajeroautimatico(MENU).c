#include <stdio.h>


int main(){

	int opcion;
	float agregar,quitar,saldo = 1000;

	printf("\tBienvenido a a su cajero virtal\n");
	printf("N1. Ingrese su cuenta\n");
	printf("N2. Retirar dinero de la cuenta\n");
	printf("N3. Salir\n");
	printf("Opcion\n");
	scanf("%i",&opcion);

	switch(opcion){
		case 1: printf("Cuanto dinero desea agregar a al acuenta\n");
				scanf("%f",&agregar);
				saldo += agregar;
				printf("El saldo total es %.2f\n",saldo);
				break;

		case 2: printf("Cuanto dinero desea retirar\n");
				scanf("%f",quitar);
				if (quitar > saldo){
					printf("El saldo a retirar es mayor a su saldo");
				}
				else{
					saldo -= quitar
					printf("Su saldo disponible es %f\n",saldo );
					break;

				}

		case 3: break;

		default: printf("Se ha equivocado de opcion\n");




	}


	return 0;
}