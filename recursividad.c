/*RECURSIVIDAD: una funcion recursividad es una funcion que se llama asi mismo.

1. caso base
2. caso recursivo
a(x){
if(n=1){

  return 1
}
else{
  a(x)
  }

}
*/
#include<stdio.h>
long recursividad();

int main(){
  int numero;

  printf("Digite un numero ");
  scanf("%i",&numero);


 printf("%li",recursividad(numero));

  return 0;
}




long recursividad(int n){

  if(n<=1){
    return 1;
  }
  else{

    return n*recursividad(n-1);
  }



}
