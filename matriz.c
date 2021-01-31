#include <stdio.h>

int main(void) {
  int matriz[2][3] = {{1,2,3},{4,5,6}};
  int filas,columnas;
  // float matriz[2][3] = {{1.5,2.4,3.6},{4.5,5.4,6.5}};



  for(filas=0;filas<2;filas++){
    for(columnas=0;columnas<3;columnas++){

        printf("%i",matriz[filas][columnas]);
    }

    printf("\n");


  }
  return 0;
}