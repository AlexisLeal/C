#include <stdio.h>
#include <stdlib.h>//Para importar la funcion malloc

int main(void) {
  //Para la memoria dinamica se utilizan los punteros 

  int *a;
  

  a = malloc(sizeof(int)); // sizeof(int) tamaño de una variable entera, lo va calulcar y el malloc te va a reservar un espacion en memoria solo lo que ocupas
  /*
  int x;
  x = sizeof(int); para ver el tamaño de la int en la pc 
  printf("%i",x);
  */ 

  *a=5;
  printf("%i",*a);

  // Otra forma es 
  // a = (int *)malloc(sizeof(int));
  //nombre = tipodedato malloc(tamañoenbytes )
  
  return 0;
}