/*7. Pedir su nombre al usuario y devolver el número de vocales que hay.*/

#include<stdio.h>

int cuentaVocales(char *);

int main(){
	char nombre[20];
	
	printf("Digite su nombre: ");
	gets(nombre);

	printf("Numero de vocales: %i",cuentaVocales(nombre));
	
	return 0;
}

int cuentaVocales(char *s){//(nombre){// el char *s es simplemente que va hacer un puntero de y la s es de strig o palabra puede ser cualquier variable
	int cont = 0;
	while(*s){//(*nombre){ //mientras que s no sea nulo \0 es algo por defacult en c https://stackoverflow.com/questions/7778087/while-s-how-does-this-work
		//la s apunta a la primea letra del nombre que encuentre
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	cont++;
		}
		s++; //para que pasa a la siguiente letra 
	} 
	
	return cont;
}
