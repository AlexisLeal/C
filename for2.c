#include <stdio.h>
int main(void) {
  int i,suma=0;

  for(i=1;i<=10;i++){

    if(i%2==0){

      suma += i;
    }


  }
 printf("La suma es %i",suma);


  return 0;

}


/*

Esta es otra forma sin necesidad de sumar 

for(i=0;i<=10;i+=2){

      suma += i;
    }








*/