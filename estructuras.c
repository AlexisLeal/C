#include <stdio.h>

struct persona{
  char nombre[20];
  int edad;
}
persona1={"Alexis",23},
persona2={"Melina",19},
persona3;

//Normamente las variables de declaran adentro pero tambien puede ser afuera
int main(void) {
  printf("Digite su nombre ");
  fgets(persona3.nombre,20,stdin);

  printf("Digite su edad ");
  fflush(stdin);
  scanf("%i",&persona3.edad);

  printf("Su nombre es %s ",persona1.nombre);
  printf("la edad es %i\n",persona1.edad);


  printf("Su nombre es %s ",persona2.nombre);
  printf("la edad es %i\n",persona2.edad);

  printf("Su nombre es %s ",persona3.nombre);
  printf("la edad es %i",persona3.edad);


  return 0;
}