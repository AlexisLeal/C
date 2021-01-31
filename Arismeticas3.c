#include <stdio.h>

int main(){
	float basemayor,basemenor,altura,area;

	printf("Introduce Base Mayor:\n");scanf("%f",&basemayor);// Esto nos sirve para ahorranos espacio en el programa
	

	printf("Introduce la Base menor:\n");
	scanf("%f",&basemenor);
	
	printf("Introduce la altura:\n");
	scanf("%f",&altura);
	

	area = ((basemayor+basemenor)*2)/altura;

	printf("El resultad es: %.2f\n",area );
	return 0;

}


