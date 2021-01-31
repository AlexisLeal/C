#include<stdio.h>
#include<string.h>
#define TAM 20 //No lleva ; los define 

int main(){
  char nombre1[TAM],nombre2[TAM];

  printf("Digite su nombre ");
  fgets(nombre1,TAM,stdin);


  strcpy(nombre2,nombre1);

  printf("%s",nombre2);




  return 0;
}