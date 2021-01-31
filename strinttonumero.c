#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char palabra[20]="12345";
  int valor;
  

  valor = atoi(palabra); //numero entero
  valor++;

  printf("%i\n",valor);


  return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
 char *cadena="100.25";
 char cadena[10]="100.25"; //es igual funciona igual 
 float valor;


 valor=atof(cadena);

 printf("%.2f",valor);




  return 0;
}





*/

