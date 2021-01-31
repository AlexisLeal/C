#include <stdio.h>

int main (){
  
  int i,numero,factorial=1; // No puede ser cero;

  printf("Introduce el numero ");
  scanf("%i",&numero);

  for(i=1;numero>=i;i++){

    factorial *=i;
  }
printf("%i",factorial);




 
 return 0;
}