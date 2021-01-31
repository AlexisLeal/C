#include <stdio.h>
#include <string.h>

int main(void) {
  char palabra1[10]="Hola";
  char palabra2[10]="Hola";


if(strcmp(palabra1, palabra2)==0){
  printf("Las palabras son iguales");
  //Las cadenas deben ser exactamenten iguales y eso dara cero 
}
else{
  printf("Las cadenas son distintas");
}
 
  return 0;
}

