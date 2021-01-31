#include <stdio.h>

int main(void) {
  int lista[5] = {10,5,8,4,6};
  int i,j,aux;

  for(i=0;i<5;i++){ //5 por el tamaño del array
    for(j=0;j<5;j++){
      if(lista[j]>lista[j+1]){

        aux=lista[j];
        lista[j]=lista[j+1];
        lista[j+1]=aux;
     }
    }
 }
// Forma ascedente
for(i=0;i<5;i++){
  printf("%i ",lista[i]);
}

printf("\n");
// forma desendente 
for(i=4;i>=0;i--){
  printf("%i ",lista[i]);
}


  return 0;
}

//se llama asi por el refresco de la cocacola que hace muchas brubujas 