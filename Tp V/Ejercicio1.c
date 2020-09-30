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
	double comprobar,numero,total;
	printf("Ingresaremos numeros que se acumularan hasta presionar 0:\n");
	do {
		printf("Ingrese un numero: \n");
		//Se ingresan datos y se guarda en la variable 'comprobar' si son válidos:
		comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
		//Se limpia la entrada por teclado:
		while(getchar()!='\n');
		//Mientras no se ingresen números, se seguirá pidiendo que se ingresen:
		while(comprobar == 0){
			printf("Solo se admiten numeros! \n");
			printf("Ingrese un numero: ");
			comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Si se ingresó cero, no se volverá a mostrar el total acumulado.
		if(numero != 0){
			//Se va acumulando la suma total en la variable 'total':
			total = total+numero;
			printf("Total acumulado: %.2lf \n",total);
		}
		//Se termina el do...while cuando se ingresa 0:
	} while (numero!=0);
	printf("Programa finalizado.");
	return 0;
}

