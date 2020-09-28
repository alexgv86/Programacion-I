#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float division;
	int multiplicacion,numero1,numero2,resta,suma;
	printf("Ingrese 2 numeros. Si ambos son 0, termina el programa.\n");
	do{
		printf("Primer numero: \n");
		scanf("%d",&numero1);
		printf("Segundo numero: \n");
		scanf("%d",&numero2);
		if(numero1 != 0 && numero2 != 0){
			if (numero2==0) {
				printf("No se puede resolver una division por cero\n");
			} else {
				suma = numero1+numero2;
				printf("La suma de ambos numeros es: %d\n",suma);
				resta = numero1-numero2;
				printf("La resta entre ambos numeros es: %d\n",resta);
				multiplicacion = numero1*numero2;
				printf("La multiplicacion entre ambos numeros es: %d\n",multiplicacion);
				division = (float)numero1/(float)numero2;
				printf("La division entre ambos numeros es: %f\n",division);
			}
			printf("\nRepetimos el procedimiento:\n");
		}
	}while(numero1 != 0 && numero2 != 0);
	printf("Programa finalizado.");
	return 0;
}
