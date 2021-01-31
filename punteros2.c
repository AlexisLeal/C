#include <stdio.h>

int main(void) {
  int entero = 20;
  float flotante = 15.5;
  char letra='A';
  int *p_entero = &entero;
  float *p_flotante = &flotante;
  char *p_letra = &letra;


  printf("La posicion es %p",p_entero);//posicion de memoria 
  printf("\nLa posicion es %p",&entero);
  printf("\nEl dato es %i",entero);
  printf("\nO tambien %i",*p_entero);//Dato de la variable




  return 0;
}