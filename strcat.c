#include <stdio.h>
#include <string.h>

int main(void) {
  char cad1[20]="Hola que tal";
  char cad[30]=" mi nombre es alexis";
  strcat(cad1, cad);
  //strcat(cad1,"mi nombre es alexis");



  printf("%s",cad1);
  

 
  return 0;
}