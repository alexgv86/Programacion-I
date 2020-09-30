#include <stdio.h>
int main() {
	//Declaro las variables y les asigno cero para que estén limpias:
	double celsius,comprobar,farenheit = 0;
	printf("Ingrese temperatura en grados fahrenheit: ");
	//do...while para que ingrese al bucle obligatoriamente:
	do{
		//Compruebo que los datos ingresados sean correctos:
		comprobar = (scanf("%lf",&farenheit) == 1) ? 1 : 0;
		//Purgo la entrada por teclado:
		while(getchar()!='\n');
		//Pido que los datos sean correctos:
		while(comprobar == 0){
			printf("Error! Solo se admiten numeros: ");
			comprobar = (scanf("%lf",&farenheit) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Si los grados f ingresados son distintos a 999, procedo:
		if(farenheit != 999.0){
			//Compruebo que los grados f estén en el rango indicado:
			if (farenheit >= -100 && farenheit <= 140) {
				//Calculo los grados c:
				celsius = ((double)5/9)*(farenheit-32);
				printf("La temperatura en grados celsius es de: %.2lf \n",celsius);
			//Sino estoy en el rango de temperaturas indicado:
			} else {
				printf("La temperatura debe estar entre -100 y 140 grados fahrenheit\n");
			}
		}
		//Si el valor ingresado es distinto a 999, repetimos la operación:
		if(farenheit != 999)
			printf("Repetiremos la operación: \n Ingrese temperatura en grados fahrenheit: ");
	//Salgo del bucle si el valor ingresado es 999:
	}while(farenheit != 999.0);
	printf("\n Fin del programa.");
	return 0;
}

