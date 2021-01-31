#include <stdio.h>
#include <stdlib.h>//Para importar la funcion malloc
#include <string.h>

int main(void) {
  int *vector,i,;

  vector = malloc(3*sizeof(int));//Reservando memoria para 3 elementos
  //rellenado para 3 elementos
  vector[0] = 1;
  vector[1] = 2;
  vector[2] = 3;
for(i=0;i<3;i++){
  printf("%i\n",vector[i]);

}

//realloc
vector = (int *)realloc (vector,sizeof(int)*5); //ampliado el arreglo a 5 
//       (int *) se puede quedar o quitar asi funciona es como especificar el tipo
vector[3]=4;
vector[4]=5;

printf("\n");

for(i=0;i<5;i++){
  printf("%i\n",vector[i]);

}

free(vector);
  return 0;
}