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
	//Declaro las variables y les asigno cero para que estén limpias:
	double comprobar,numero,promedio,total = 0;
	//Los valores mínimos y máximos no se inicializan por si el usuario
	//ingresa valores negativos:
	double min,max;
	int checkCont,contador,i = 0;
	printf("El ejercicio se divide en 3 partes:\n"
			"1) Ingrese la cantidad de numeros que quiera ingresar.\n"
			"2) Ingrese los numeros respectivos.\n"
			"3) El programa devolvera el total y el promedio de los valores.\n"
			"Ingrese la cantidad de numeros que desea utilizar: \n");
	//Se ingresan datos y se comprueba si son válidos:
	checkCont = (scanf("%d",&contador) == 1) ? 1 : 0;
	//Se limpia la entrada por teclado:
	while(getchar()!='\n');
	//Se pedirá que se ingrese un número entero:
	while(checkCont == 0){
		printf("Solo se admiten numeros enteros! \n Ingrese un numero entero: ");
		checkCont = (scanf("%d",&contador) == 1) ? 1 : 0;
		while(getchar()!='\n');
	}
	//Se procede al ingreso de los numeros a calcular:
	for (i=0;i<contador;i++) {
		printf("Ingrese un numero: \n");
		//Ingreso de datos:
		comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
		//Limpieza de entrada:
		while(getchar()!='\n');
		//Petición de número como ingreso:
		while(comprobar == 0){
			printf("Solo se admiten numeros! \n Ingrese un numero: ");
			comprobar = (scanf("%lf",&numero) == 1) ? 1 : 0;
			while(getchar()!='\n');
		}
		//Se asigna el primer valor al mínimo y al máximo:
		if(i==0){
			min = max = numero;
		}
		//Si el número es mayor a 'max', se asigna al mismo su valor:
		if(numero > max)
			max = numero;
		//Si el número es menor a 'min', se asigna al mismo su valor:
		if(numero < min)
			min = numero;
		//Se van acumulando los números ingresados:
		total = total+numero;
	}
	//Se calcula el promedio:
	promedio = total/contador;
	//Se imprimen los resultados:
	printf("El total es: %.2lf \n",total);
	printf("El promedio es: %.2lf \n",promedio);
	printf("El menor valor ingresado es: %.2lf \n",min);
	printf("El mayor valor ingresado es: %.2lf \n",max);
	return 0;
}

