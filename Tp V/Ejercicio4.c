/* Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se ley�
   otra variable con scanf. */

int main() {
	float contador;
	float i;
	float mayor;
	float menor;
	float numero;
	float promedio;
	float total;
	printf("En esta ocasi�n, el ejercicio se divide en 3 partes:\n");
	printf("Primero ingresamos la cantidad de n�meros que vamos a querer ingresar.\n");
	printf("Segundo, iremos ingresando los n�meros respectivos.\n");
	printf("Por �ltimo, el programa devolver� la sumatoria total, el promedio, tanto como el n�mero mayor y el menor ingresado.\n");
	printf("Ingrese la cantidad de n�meros que desea utilizar: \n");
	scanf("%f",&contador);
	for (i=1;i<=contador;i+=1) {
		printf("Ingrese un n�mero: \n");
		scanf("%s",numero);
		total = total+numero;
		if (i==1) {
			mayor = numero;
			menor = numero;
		} else {
			if (numero>mayor) {
				mayor = numero;
			} else {
				if (numero<menor) {
					menor = numero;
				}
			}
		}
	}
	promedio = total/contador;
	printf("El total es: %f y el promedio es: %f\n",total,promedio);
	printf("El valor m�s peque�o ingresado es: %f y el m�s grande ingresado es: %f\n",menor,mayor);
	return 0;
}

