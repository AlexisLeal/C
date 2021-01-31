/*


Existe dos funciones 

Las void que no tiene retorno de valor 


Y las que pones el tipo de dato estas si tienen retorno de valor 
*/

#include<stdio.h>
//Prototipos
void saludo(); //Es una buena practica de programacion para decirle al programa que realmente existe la funcion 
int sumar();

int main(){
	int nu1,nu2, suma_var = 0;


	saludo(); //Asi llamamos la funcion saludo es como en python 

	printf("introduce dos numeros\n");
	scanf("%i %i",&nu1,&nu2);


	suma_var = sumar(nu1,nu2);

	printf("La suma es %i\n",suma_var);

	// printf("La suma es %i\n",sumar(nu1,nu2)); 
	//Esta es otra forma pero la verdad es mejor la otra por que asi lo manejas en python 







	return 0;
}
//El lenguaje C solo ejecuta main pero si vemos la funcion saludo esta debajo del main y no la encontrara por eso se hacen los protoripos  
void saludo(){

	printf("Hola esto es la funcion saludo\n");
}


int sumar(int n1,int n2){

	int suma = 0; //variable local 

	suma = n1 + n2;

	return suma;
}