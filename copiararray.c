#include <stdio.h>
void copiararray();

int main(void) {
  int array1[5]={1,2,3,4,5};
  int array2[5];

  copiararray(array1,array2,5);
  return 0;
}
//a[] = array1
//b[] = array2


void copiararray(int a[],int b[], int tamaño){
  int i;
  for(i=0;i<tamaño;i++){
    b[i]= a[i];
    }

  for(i=0;i<tamaño;i++){
    printf("%i",b[i]); //I por que son elementos enteros
  }


}