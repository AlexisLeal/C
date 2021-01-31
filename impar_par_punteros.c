#include <stdio.h>

int main(void) {
  int numero = 0;
  int *p_numer = &numero;

  printf("Introduzca el numero ");
  scanf("%i",&numero);
  if(numero%2==0){
    printf("El numero es par");
    printf("\nLa posicion es %p",p_numer);
  }
  else{
    printf("El numero es impar");
    printf("\nLa posicion es %p",p_numer);
    printf("\nLa posicion es %p",&numero);

  }

  return 0;
}