/* Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se ley�
   otra variable con scanf. */

int main() {
	float contador,i,numero,promedio,total;
	printf("En esta ocasion, el ejercicio se divide en 3 partes:\n");
	printf("Primero ingresamos la cantidad de numeros que vamos a querer ingresar.\n");
	printf("Segundo, iremos ingresando los numeros respectivos.\n");
	printf("Por ultimo, el programa devolvera la sumatoria total y el promedio.\n");
	printf("Ingrese la cantidad de numeros que desea utilizar: \n");
	scanf("%f",&contador);
	for (i=1;i<=contador;i+=1) {
		printf("Ingrese un numero: \n");
		scanf("%f",&numero);
		total = total+numero;
	}
	promedio = total/contador;
	printf("El total es: %f y el promedio es: %f\n",total,promedio);
	return 0;
}

