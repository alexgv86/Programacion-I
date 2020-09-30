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
	double comprobar,contador,numero,promedio,total = 0;
	printf("Ingresaremos numeros y terminaremos al ingresar 0.\n");
	printf("Por ultimo se mostrara la sumatoria y el promedio total.\n");
	do {
		printf("Ingrese un numero: \n");
		//Asigno a 'comprobar' si es válido el valor ingresado:
		comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
		//Purgo la entrada por teclado:
		while(getchar()!='\n');
		//Mientras el valor asignado sea inválido, se pedirá un valor correcto:
		while(comprobar == 0)
		{
			printf("Solo se admiten numeros! \n");
			printf("Ingrese un numero: ");
			comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Se va acumulando lo ingresado en 'total'
		total = total+numero;
		//Si ingreso cero, no incrementa el contador para que el promedio sea correcto:
		if(numero != 0)
			contador++;
		//El do...while termina al ingresar cero:
	} while (numero!=0);
	//Saco el promedio:
	promedio = total/contador;
	//Imprimo los resultados:
	printf("El total es: %.2lf y el promedio es: %.2lf\n",total,promedio);
	return 0;
}

