#include <stdio.h>

int main(void) {

  int lista[5] ={5,4,6,8,1};
  int i,dato;
  char band='F';
  dato=1;


i=0;
while(band=='F'&&i<5){
  if(lista[i]==dato){
    band='V';
    

  }
i++;
}
if(band=='F'){
  printf("No se encontro el numero");
}
else{
  if(band=='V'){
    printf("El numero si se encontro en el arreglo en la posicion %i ",i-1);//Menos uno por el ultima vuelta de while 
  }
}



 
  return 0;
}
