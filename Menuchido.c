#include <stdio.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(void) {

menu();
printf("\nHasta Luego");

  
  return 0;
}

void menu(){
  int opc;
  do{

    printf("opcion 1 -- Sumar\n");
    printf("opcion 2 -- Restar\n");
    printf("opcion 3 -- Multiplicar\n");
    printf("opcion 4 -- Dividir\n");
    printf("opcion 5 -- Salir\n");
    scanf("%i",&opc);

    switch(opc){
      case 1: sumar(); break;
      case 2: restar(); break;
      case 3: multiplicar(); break;
      case 4: dividir(); break;
    }
      }while(opc != 5);
 
}

void sumar(){
   float n1,n2,resultado=0;
   printf("Introduce los numeros ");
   scanf("%f %f",&n1,&n2);

   resultado = n1 + n2;

   printf("El resultado es %.2f\n",resultado);
  }

void restar(){
   float n1,n2,resultado=0;
   printf("Introduce los numeros ");
   scanf("%f %f",&n1,&n2);

   resultado = n1 - n2;

   printf("El resultado es %.2f\n",resultado);
  }


void multiplicar(){
   float n1,n2,resultado=0;
   printf("Introduce los numeros ");
   scanf("%f %f",&n1,&n2);

   resultado = n1 * n2;

   printf("El resultado es %.2f\n",resultado);
  }


void dividir(){
   float n1,n2,resultado=0;
   printf("Introduce los numeros ");
   scanf("%f %f",&n1,&n2);

   resultado = n1 / n2;

   printf("El resultado es %.2f\n",resultado);
  }