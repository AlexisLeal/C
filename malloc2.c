#include <stdio.h>
#include <stdlib.h>//Para importar la funcion malloc
#include <string.h>

int main(void) {
  char nombre[20],*p_nombre;
  int longitud;
  strcpy(nombre, "Alexis");

  longitud=strlen(nombre);//Nos devulve la longitud es como len en python
  //printf("%i",longitud);
  

  p_nombre = malloc((longitud+1)*sizeof(char));

  strcpy(p_nombre, nombre);

  printf("%s",p_nombre);


  return 0;
}