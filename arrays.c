/*Arrays 
Arrays enteros 
Arrays flotantes
Arrays caracteres
Arrays String
*/



#include <stdio.h>
#include<conion.h> //Esta libreria contiene la funcion getch

int main(void) {
  int i;
  //enteros
  int numero[5]; // = {1,2,3,4,5};
            //indice   0 1 2 3 4

            //forma de mostrar el array
            for(i=0;i<numero;i++){
              printf("%i",&numero[i]);
            }

            //Forma de agregar dinamicamente en un array 
            for(i=0;i<numero;i++){
              printf("Digite un  numero\n");
              scanf("%i",&numero[i]);
            }

    //ATENCION la I debe ser del mismo tipo de dato que el array
  
  //flotantes
  float numero_flotante[5];
  // caracteres
  char letras[5]; // ={'a','e','i','o','u'};
    // arrays de caracteres 
      int i;

      for(i=0;i<letras;i++){
        printf("%c\n",letras[i]);
      }

  // string
  char palabra[6]; // = "Alexis";
  // esto es un string para capturar utilizamos fgets por que gets es insegura 
  printf("introduce tu nome\n");
  fgets(palabra,6,stdin);
  printf("%s\n",palabra);

getch();// Esta funcion hace que nuestro ejecutable no se cierre automaticamente 

  return 0;
}


// Primero va el tipo de dato luego el nombre del array y al final la cantidad del array entre corchetes 