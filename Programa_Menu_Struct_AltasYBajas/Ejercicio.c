#include <stdio.h>
#include <string.h>
void agregar();;
void visualizar();
void eliminar();

struct calificaciones{
  float matematicas;
  float español;
  float ingles;
  float programacion;
}cal[50];

struct medico{
  char tipo_de_sangre[5];
  char alegria[50];
  char enfermedad[100];

}medico[50];


struct alumno{
  char nombre[50];
  int edad;
  char sexo;
  int semestre;
  int matricula;
  struct calificaciones cali;
  struct medico med;
}alumno[50];

int main(void) {
  int opcion=0;
  //Agregar Alumnos de manera Estatica (Prueba)
  strcpy(alumno[0].nombre, "Alexis Leal Mata");
  alumno[0].matricula=1581606;

 
  do{
    fflush(stdin);
    printf("Bienvienidos a la Universidad Autonoma de Nuevo Leon\n");
    printf("");
    printf("Por Favor elige una opcion\n");

    printf(" [1]. Agregar un Alumno\n [2]. Visualizar\n [3]. Eliminar alumno\n [4]. Salir\n" );
    scanf("%i",&opcion);

    switch(opcion){
      case 1: agregar(); break;
      case 2: visualizar(); break;
      case 3: eliminar(); break;
      case 4: break;
      default:printf("Elige una opcion valida recuerda que es del 1 a 4\n");
    }

  }while(opcion !=4);

  printf("Hasta Luego ");
  return 0;
    }

  void agregar(){
    printf("");

  }


  void visualizar(void){
    int opcion;
    fflush(stdin);
    do{   
    printf("Elige la opcion que deseas realizar\n");
    printf(" [1]- Visualizar de manera Individual\n [2]- Visualizar de manera general\n [3] Salir a menu principal\n");
    scanf("%i",&opcion);

    if(opcion==1){
      printf("Lista de Alumnos disponibles\n");
      for(int i=0;i<2;i++){ //cambia el parametro de i<2
        printf("%s ",alumno[i].nombre);
        printf("  %i\n",alumno[i].matricula);
      }
      printf("\n");

    }

    else if(opcion==2){

    }

    else if(opcion==3){
      printf("Volviendo al menu");
    }

    else{
      printf("Elige una opcion valida");
    }


  }while(opcion!=3);
  }
  

  void eliminar(){
    printf("");

  }

