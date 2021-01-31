#include<stdio.h>

//Tipo de datos 


int main(){

	char a = 'e'; // variable del tipo char o tipo caracter que  puede ser cualquier elemento  numero,letra o caracter especial
		//Mucho cuidado debe ser con comilas simples si no te marca error  %c
		// char tamaño = 1 byte rango del 0..255


	short b = -15; // tamaño = 2 bytes rango del -128 a 127
	// con short para el prinf se puedo copiar con %i osea como entero 

	int c = 1024 ; // tamaño 2  bytes  rango del -32768 a 32768 &i

	unsigned int d = 128; // Tamaño 2 bytes rango del 0 a 65535
	// Es solo un entero sin signo osea puro valor positivo  %i

	long e = 123456; // tamaño 4 bytes  rango -2147483648 a 2147483648
						// para imprimir un tipo long es %li osea longin es una mamada xd

	float f = 15.678; // tamaño 4 bytes %f o %.2f 


	double m = 123123.123123; // tamaño de 8 bytes  %lf  %.lf de esta forma tanformarmos el flotante a un entero 



	printf("El elmento es: %i\n",d );

/*

  %c - "char" "unsigned char"
  %d - "int" osea decimal 
  %i - "short" "int" "unsigned int" 
  %li - "long"
  %f - "float"
  %lf - "double"
  %Lf - "long double"

  %s - "char texto[n]" secuencia de caracter
 


*/


	return 0;
}