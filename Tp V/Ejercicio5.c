#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaro todas las variables en cero:
	double comprobar,division, multiplicacion, numero1,numero2,resta,suma = 0;
	printf("Ingrese 2 numeros. Si ambos son 0, termina el programa. \n");
	//Aplico do...while para que entre obligatoriamente al bucle
	do{
		printf("Primer numero: \n");
		//Ingreso el primer número y guardo en comprobar si el varor es válido:
		comprobar = (scanf("%lf",&numero1) == 1) ? 1 : 0;
		//Purgo lo ingresado por teclado para evitar bucle infinito:
		while(getchar()!='\n');
		//Pido que se ingrese un número:
		while(comprobar == 0){
			printf("Error! Ingrese un numero: ");
			comprobar = (scanf("%lf",&numero1) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Repito toda la operación del primer número, para el segundo:
		printf("Segundo numero: \n");
		comprobar = (scanf("%lf",&numero2) == 1) ? 1 : 0;
		while(getchar()!='\n');
		while(comprobar == 0){
			printf("Error! Ingrese un numero: ");
			comprobar = (scanf("%lf",&numero2) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Si ambos números son = a cero, no entrará en este bucle:
		if(numero1 != 0 || numero2 != 0){
			//Si el segundo número es 0 y el primero no, repetimos la operación:
			if (numero2 == 0) {
				if(numero1 != 0){
					printf("No se puede resolver una division por cero\n");
					printf("\nRepetimos el procedimiento:\n");
				}
			//Si el segundo número NO es cero, hago toda la cuenta:
			}else{
				suma = numero1 + numero2;
				printf("La suma de ambos numeros es: %.2lf \n",suma);
				resta = numero1 - numero2;
				printf("La resta entre ambos numeros es: %.2lf \n",resta);
				multiplicacion = numero1 * numero2;
				printf("La multiplicacion entre ambos numeros es: %.2lf \n",multiplicacion);
				division = numero1/numero2;
				printf("La division entre ambos numeros es: %.2lf \n",division);
				printf("\nRepetimos el procedimiento:\n");
			}
		}
	//Si ambos números son cero, no aparece el mensaje de repetir procedimiento
	//y salgo del bucle:
	}while(numero1 != 0 || numero2 != 0);
	printf("Programa finalizado.");
	return 0;
}
