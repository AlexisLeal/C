// Operadores de asignacion

// Pedir dos numeros al usuario sumarlos,restalos, multipliacos y dividirlos 
#include <stdio.h>

int main(){

float x,y,suma,resta,multiplicacion,division;
suma=resta=multiplicacion=division=0;



printf("Introduce el primer numero\n");
scanf("%f",&x);


printf("Introduce el segundo numero\n");
scanf("%f",&y);

suma = x +y;
resta = x-y;
multiplicacion = x*y;
division = x/y;

printf("El resultao de la suma es : %.2f\n",suma );
printf("El resultao de la resta es: %.2f\n",resta );
printf("El resultao de la multiplicacion es: %.2f\n",multiplicacion );
printf("El resultao de la division es: %.2f\n",division);


return 0;



}