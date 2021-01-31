#include <stdio.h>
int main(void) {
  char cadena[5]={'a','b','c','d'};
  char cadenainvertida[5];
  int i;



  for(i=0;i<4;i++){
    cadenainvertida[i]=cadena[3-i];
    
    //el tres el el numero de posciones 
  }

  for(i=0;i<5;i++){
    printf("\n%c",cadenainvertida[i]);
  }

  printf("Hello World\n");
  return 0;
}