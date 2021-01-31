#include <stdio.h>


int main(){
	float total,descuento,total_final;
  	char a = 37;//formato asci jajaja 

	printf("Introduca el total de la compra\n");
	scanf("%f",&total);

	printf("Se la aplicara un descuento del 15%c en la compra total\n",a);

  descuento = total * 0.15;

  printf("El total de la compra ya con el descuento es: %.2f\n",descuento);










	return 0;

}