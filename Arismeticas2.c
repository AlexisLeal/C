//Sacar el valor de la hipotenusa de un triangulo rectangulo pidiendo el valor de los catetos 
#include <stdio.h>
#include <math.h>

// scanf("%f %f",&cateto1,&cateto2)

int main(){
	float hipotenusa,cate1=0,cate2=0;

	printf("Introduce el valor del primer cateto:\n");
	scanf("%f",&cate1);

	printf("Introduce el valor del segundo cateto 2:\n");
	scanf("%f",&cate2);

	hipotenusa = sqrt(pow(cate1,2) + pow(cate2,2)); //En c no existe el valor hipotenusa**2 asi lo elevamos en otro lenguajes, aqui es con pow(elvalor,aloquequeremoselevar)


	printf("El valor de la Hipotenusa es %.2f\n",hipotenusa);







	return 0;
}