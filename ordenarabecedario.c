#include <stdio.h>
#include <string.h>

int main(void) {
  char palabra1[20];
  char palabra2[30];

  printf("intrude el nombre ");
  fgets(palabra1, 20, stdin);

  printf("intrude el nombre numero 2 ");
  fgets(palabra2, 20, stdin);


  if(strcmp(palabra1, palabra2)>0){
    //Le decimos si palabra1 es mayor (albando afabeticamente) a palabra2 lo que se signica que palabra 1 va despues del diccionario
    printf("%s y %s",palabra2,palabra1);
    //se signica que palabra2 va primero en el diccionario
  }

  else{
    printf("%s %s",palabra1,palabra2);
  }





  return 0;
}