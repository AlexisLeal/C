int main(void) {
  int lista[5]={2,5,4,8,6};
  int i,j,aux,min;

  for(i=0;i<5;i++){
    min=i;
    for(j=i+1;j<=5;j++){ //hasta un elemento despues de nuestro array para amarrar, es i mas 1 para que cheque todos realmente 
      //el i mas uno es para empezar realmenrte de la posicion actual de i y no ver atras 
      //por que si lo ve atras lo volvera a cambiar y todo queda como empezo TENER CUIDADO 
      if(lista[j]<lista[min]){
        min=j;
      }
    }
    aux=lista[i];
    lista[i]=lista[min];
    lista[min]=aux;
  }



 for(i=0;i<5;i++){
    printf("%i ",lista[i]);
  }





  return 0;
}