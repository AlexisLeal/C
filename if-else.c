#include <stdio.h>



int main(){

	float nl,n2;

	printf("Introduce el primer numero:\n");
	scanf("%f",nl);


	printf("Intruce le segundo numero:\n");
	scanf("%f",n2);


	if(nl>n2){

		printf("%.2f\n",nl );
	}

	else // esto estan aninados 

		if (n2>n1){
			printf("el mayor es %f\n",n2 );

		}

		else{

			printf("ambos son iguales\n");
		}
	


 



	return	0;
}
