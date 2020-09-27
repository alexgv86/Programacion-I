/* Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	float contador,numero,promedio,total;
	printf("Ingresaremos numeros y terminaremos al ingresar 0.\n");
	printf("Por ultimo se mostrara la sumatoria y el promedio total.\n");
	contador = -1;
	do {
		printf("Ingrese un numero: \n");
		scanf("%f",&numero);
		total = total+numero;
		contador = contador+1;
	} while (numero!=0);
	promedio = total/contador;
	printf("El total es: %f y el promedio es: %f\n",total,promedio);
	return 0;
}

