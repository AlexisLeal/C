#include <stdio.h>

//Entradas y Salidas 



int main(){

		int a = 10;
		float b = 15.5;
		char c = 'c';
		printf("%i %.1f %c\n",a,b,c );	
//-----------------------------------------------------------------------------------------

	   int a;
	   float b;
	   char c;

		printf("introduce el valor de a: ");
		scanf("%i",&a); // Entre parentesis es el tipo de dato que va entrar 
		// luego & es lugar en memoria donde se va a guardar en este caso a 
		printf("El valor es: %i\n",a);

		printf("introduce el valor de c: ");
		scanf("%c",&c);
		printf("%c\n", c);

		//Nota: El scanf solo lee hasta que encuentre un espacio y cuando encuentre un espacio piensa que ya no nada luego 
// -------------------------------------------------------------------------------------------


    char x[50]; //Esto es un string
    printf("Intruduce tu nombre:\n");
    gets(x); //gets es un metodo completamente inseguro por que 
    // no limita osea tiene una falla de control interno si decimos que va esperar 10 le podemos meter muchas mas 
    printf("%s\n\n",x);

//-------------------------------------------------------------------
  printf("Funcion segura introduce tu nombre: ");
  fgets(x, 50, stdin); //Esto es un funcion SEGURA
  printf("%s",x);
// fgets(nombrestring, tamañostring, stdin);
// fgets(char *restrict __s, int __n, FILE *restrict __stream)
/*
Los usuarios podemos iniciar los programas asociando a estos tres archivos cualquier dispositivo o archivo que queramos. Pero en general, se entiende que stdin será conectado a un flujo de entrada, digamos un teclado o un archivo desde el cual se van a leer datos. Por su parte, stdout es conectado a un dispositivo de salida, digamos la pantalla o un archivo al cual vamos a escribir datos. Y finalmente tenemos a stderr, que se entiende será conectado o bien a la pantalla o a un archivo al que vamos a añadir reportes de error.
*/







	return 0;
}



/*
Permission denied
collect2.exe: error: ld returned 1 exit status

Cuando esto sucede, el culpable más probable es que el programa que compiló ya se está ejecutando, y debido a que Windows bloquea los archivos que están en uso, los intentos de volver a vincularlo fallan porque el ejecutable existente está bloqueado y, por lo tanto, el enlazador no puede tócalo. Entonces, la solución es matar el programa en ejecución (es posible que deba usar el administrador de tareas para hacer esto).

Esta pregunta ha surgido innumerables veces en Stack Overflow y la razón siempre se debe a intentar ejecutar un programa que reúne información. El programa mencionado anteriormente hace esto, por ejemplo.

En resumen, eso no funciona; Sublime no reenvía ninguna entrada que escriba en el panel de salida a su programa en ejecución, por lo que se cuelga para siempre en el fondo esperando la entrada que no puede proporcionar. Luego intenta reconstruir pero el vinculador falla porque no puede eliminar el ejecutable existente porque ya se está ejecutando.

La solución es no ejecutar programas (de consola) de Sublime que necesiten tomar una entrada interactiva, o si usa un sistema de compilación que primero abrirá una ventana de símbolo del sistema y ejecutará su programa en eso; entonces puedes interactuar con él directamente.





*/
