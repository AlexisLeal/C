#include <stdio.h>

int main(void) {
  int numero = 50;
  int *p_numero=&numero; //posicion de memoria de numero
  // O p_numero=&numero;
  printf("Dato de numero es : %i",numero);
  printf("\nLa posicion es de numero es  %p",&numero);//Imprimimos la posicion de en memoria 
  printf("\n%i",*p_numero);//EL aterisco señala que imprima todo lo que tenga la posicion de memoria 
  //Señalamos al valor 

   printf("\nLa posicion de p_numero %p",&p_numero);
   printf("\nLa posicion esde la del puntero es  %p",p_numero);
  return 0;
}