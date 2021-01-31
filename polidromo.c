#include <stdio.h>
#include <string.h>
int main(void) {
  char palabra1[15]="reconocer";
  char palabra2[15];


  strcpy(palabra2, palabra1);

  strrev(palabra2);
  
  if(strcmp(palabra2, palabra1)==0){
    printf("Ambas palabras son polidromas\n");
  }

  else{
    printf("no son polindromas");
  }





  return 0;
}