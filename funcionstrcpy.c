#include <stdio.h>
#include <string.h>

int main(void) {
  char cat1[20]="Hola Mundo";
  char cat2[30];


  strcpy(cat2,cat1);

  printf("%s\n",cat2);

  strcpy(cat2+5, "y Bienvenido al lenguaje c");
  //el +5 se significa que recorre 5 espacios o letras entoces recorrera 5 y aparti del 6to empezara a sobres escribir 

  printf("%s",cat2);




 
  return 0;
}