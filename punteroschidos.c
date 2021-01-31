int main(void) {
  int numeros[10]={},i;
  int *p_numeros;
  p_numeros=numeros;// esto es igual que p_numeros = numeros[0]
  

  for(i=0;i<10;i++){
    printf("Introduzca el numero ");
    scanf("%i",&numeros[i]);
    fflush(stdin);
    }


  for(i=0;i<10;i++){
    if(*p_numeros%2==0){
      printf("El numero %i es par ",*p_numeros);
      printf("La posicion de memoria es %p ",p_numeros);
      printf("\n");
      p_numeros++;

    }
  }
  
  

  return 0;
}