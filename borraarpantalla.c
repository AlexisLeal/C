// Hacer un programa que borre la pantalla a pulsar uno 

#include <stdio.h>
#include <stdlib.h> //Esta contiene la funcin system y con la se puede limpiar pantalla 
int main(){

	char tecla;

	printf("Programa de borrado de pantalla\n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("Digite el numero uno\n");
	scanf("%c",&tecla);

	if(tecla == '1'){
		system("cls"); //clear para linux  
    printf("Se ha limpiando la pantalla");
  }
  else{
    fflush(stdin); // Esta funcion es para limpiar el buffer 
    printf("No se ha limpiando la pantalla\n");
    printf("Introduce nuevame el numero 1:\n");
    scanf("%c",&tecla);

  
    	if(tecla == '1'){
			system("cls");

   		 }

    	else{
    		printf("No ha funcionado\n");


    	}
  }
  




  return 0;

	}






	

