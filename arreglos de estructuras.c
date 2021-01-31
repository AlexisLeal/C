#include <stdio.h>


struct persona{
  char nombre[20];
  int edad;


}personas[5]; //persona1,persona2...persona5
//En este arreglo estamos metiendo 5 estructuras del tipo persona

int main(void) {
int i;
for(i=0;i<5;i++){
  fflush(stdin);
  printf("%i Introduz el nombre de una persona ",i+1);
  fgets(personas[i].nombre, 30, stdin);
  printf("Introduzca su edad ");
  scanf("%i",&personas[i].edad);
  printf("\n");
  }
for(i=0;i<5;i++){
  fflush(stdin);
  printf("Su nombre es %s",personas[i].nombre);
  printf("y su edad es %i ",personas[i].edad);
  printf("\n");
}
 return 0;
}