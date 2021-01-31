#include <stdio.h>

int main (){
  int i,numero,cont=0;
  printf("Introduce el numero: ");
  scanf("%i",&numero);

  for(i=2; i< numero;i++){
    if(numero%i==0){
      cont++;
    }
   }

   if(cont>1){
     printf("No es primo");
   }

   else{
     printf("Es primo");
   }



 
 return 0;
}



