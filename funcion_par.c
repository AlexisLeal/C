#include <stdio.h>
void par();
int ispar();


int main(void) {
  int numero;
  int resultado;
  
  printf("Introduce el numero\n");
  scanf("%i",&numero);

  par(numero);

  resultado = ispar(numero);

  if(resultado == 0){
    printf("Es par con la funcion ispar\n");
  }

  else{
    printf("No es par con la funcion ispar\n");
  }
  
  return 0;
}


void par(int n1){
  if(n1%2 ==0){

    printf("es par con la funcion par\n");
  }

  else{
    printf("no es par con la funcion par\n");
  }
}
// Esta es otra forma 

int ispar(int n1){
  if(n1%2 ==0){

    return 0;
  }

  else{
    return 1;
  }

}


