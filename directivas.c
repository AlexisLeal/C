//Directivas del preprocedaro y Variables 


#include<stdio.h> //esto es una libreria tiene un include 

#define PI 3.1416 // esto es una macro tiene un define 
//Una marco nos sivre para definir un vaariable y siempre tenga ese valor y no 

// Aprte de define tambien se puede usar const float pi 3.1416 la gran diferencia es que uno ocupa espacio de memoria y la otra no 


int y = 5 ;//variable global 

int main(){

	int x = 10; // La posicion de memoria vale 10
	//Es una variable local por que solo funciona adentro de esa funcion 
	float suma = 0;

	suma = PI + x;

	printf("La suma es: %.2f\n",suma);
	//Tenemos que indicarle que tipo de dato va imprimir
	// y como es un tip entero se le pone %i wowow magia xd 
	// luego , suma    que eso se significa que %i va a copiar todo lo que tengo dentro de suma 

	// el .2f indica que solo imprima dos decimales despues de la coma 
	// Esto esta en python lecion 3 salidas 


	return 0 ;  


}