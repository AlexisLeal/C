#include <stdio.h>
#include <string.h>

//existe un posible error en numero se cambio a un numero fijo 

int main(void) {
  int numero=0,i,varones=0,mujer=0;
  printf("Digite el numero de alumnos\n");
  scanf("%i",&numero);
  char alumnos[100];

  for(i=0;i<numero;i++){
      fflush(stdin); //para eliminar el buffer 
      printf("ingrese el sexo del alumno\n");
      fgets(alumnos,50, stdin);

      if(strcmp(alumnos,"masculino")==0){
          varones++;
      }

      else{
        if(strcmp(alumnos,"femenino")==0){
          mujer++;
           }
             }
               }

printf("numero de varones es %i\n",varones);
printf("numero de mujeres es %i\n",mujer);

return 0;
}