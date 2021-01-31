
//Suma de los numeros impares y la resta del numero impar 
#include <stdio.h>

int main() {
  int n,resultado,i;

  i =1;
  resultado=0;

  printf("Ingresa el numero: ");
  scanf("%i",&n);

  while(i<=n){
      if(i%2==0){
        resultado -= i;
      }
      else{

        resultado += i;
      }

  i++;
  }
  printf("RESULTADO ES %i",resultado);

  return 0;
}