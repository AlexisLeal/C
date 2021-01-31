#include <stdio.h>
void suma();

int main(void) {
  int matriz1[2][2]={{1,2},{2,1}};
  int matriz2[2][2]={{2,1},{1,2}};

  suma(matriz1,matriz2);
  return 0;
}


void suma(int a[][2],int b[][2]){// Cuando son matrices OBLIGATORIA MENTE DEBE TENER DECLARO EL MISMO NUMERO DE COLUMNAS Y SI QUIEREN SUMAR DEBEN SER DE LA MISMA CANTIDA DE SUMA Y COLUMNAS
int i,j,suma[2][2];
      for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          

          suma[i][j] = a[i][j]+b[i][j];
        }
      }

      for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          printf("%i ",suma[i][j]);
        }
        printf("\n");
      }
 }