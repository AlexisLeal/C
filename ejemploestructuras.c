#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct corredor{
  char nombre[50];
  int edad;
  char sexo;
  char club[50];
}corredor1;

int main(){

  char categoria[50];
  printf("introduza el nombre del corredor");
  fgets(corredor1.nombre,50,stdin);

  printf("Introduzca la edad");
  scanf("%i",&corredor1.edad);

  printf("Introduca el sexo: M o F");
  scanf("%c",&corredor1.sexo);

  printf("introduzca el club ");
  fgets(corredor1.club,50,stdin);

  if(corredor1.edad <= 18){
     strcpy(categoria,"Juvenil");                               //categoria = "Juvenil";
  }
  else if(corredor1.edad <= 40){ //es como elif de python 
     strcpy(categoria,"Señor");                               //categoria = "señor";
  }
  else{
     strcpy(categoria,"veterano");                               //categoria = "veterano";
  }

printf("El nombres es %s",corredor1.nombre);
printf("El sexo es %c",corredor1.sexo);
printf("La edad es %i",corredor1.edad);
printf("Su club es %s",corredor1.club);
printf("Su categoria es %s",categoria);
  

  system("pause");
  return 0;
}