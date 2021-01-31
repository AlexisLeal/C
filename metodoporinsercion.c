#include <stdio.h>

int main(void) {
  int lista[5] = {10,5,8,4,6};
  int i,aux,pos;

  for(i=0;i<5;i++){ //5 por el tamaño del array
    pos = i; //la posicion exacta
    aux = lista[i]; // valos exacto en el arreglo 

    while((pos>0)&&(aux <lista[pos-1])){ //utilizar una solo variable por que si cambiamos a i se apendeja 
      lista[pos] = lista[pos-1];
      pos--;
    }
    lista[pos]=aux;

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
