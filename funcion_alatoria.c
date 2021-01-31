#include <stdio.h>
#include <time.h>
#include <stdlib.h> //Libreria para la funcion rand()
void funcion_alatoria();

int main(void) {

  funcion_alatoria();

  
  
  return 0;
}


void funcion_alatoria(){
  int limIF,limSP,i,numero=0;
  srand(time(NULL));
  

  printf("Intruce el limite inferior");
  scanf("%i",&limIF);

  printf("Introduce el limite superior");
  scanf("%i",&limSP);


  for(i=0;i<=10;i++){
    numero = limIF + rand()%((limSP+1)-limIF);

    printf("%i\n",numero);

  }









}