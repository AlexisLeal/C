#include <stdio.h>

int main(void) {
  int numeros[10]={5,6,13,10,1,6,27,8,9,12},i;
  int *p_numeros;
  p_numeros=numeros;// esto es igual que p_numeros = numeros[0]
  

  for(i=0;i<10;i++){
    printf("Dato[%i] %i  ",i+1,*p_numeros);
    printf("La posicon es %p",p_numeros);
    p_numeros++;//Para que sume numeros[0] luego numeros[1] numero[n]
    printf("\n");
  }
  //toma valor de 4 por que es la cantidad reservada de int 

  return 0;
}