#include <stdio.h>

int main(void) {
  char letra;
  char *p_letra = &letra;
  for(letra='A';letra<='Z';letra++){

    printf("\n%c",*p_letra);//Le decimos que imprima todo lo que contenga esa posicon de memoria 



  }

  return 0;
}