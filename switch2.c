#include <stdio.h>



int main(){
	char nota;


	printf("Intruce la nota:\n");
	scanf("%c",&nota);

	switch(nota){

		case 'A': printf("Exelente\n");break;
		case 'B': printf("Notable\n"); break;
		case 'C': printf("Aprobado\n");break;
		case 'D': //No se pone nada y cuando ponga D va a pasar a F por que no hay break
		case 'F': printf("Reobrobado\n");

		default : printf("Nota incorrecta\n");

	}

	return 0;
}