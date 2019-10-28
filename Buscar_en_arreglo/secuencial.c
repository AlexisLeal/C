#include <stdio.h>

int main(void) {

  int lista[10] ={5,4,6,8,1,50,41,10,45,9};
  int i,dato;
  char band='F';

printf("ingrese el numero que desea buscar ");
scanf("%i",&dato);
i=0;
while(band=='F'&&i<10){
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
    printf("El numero si se encontro en el arreglo en la posicion %i ",i-1);
  }
}



 
  return 0;
}

/*
int buscar(int a[],int v,int t){
  for(int i=0;i<t;i++){
    if(a[i]==v){
      return i;
    }

  }
return -1;



*/
