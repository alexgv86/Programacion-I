#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaro las variables y asigno valor cero para limpiar registros:
	double comprobar = 0;
	double *p,sucursal[10];
	int i = 0;
	printf("Ingresaremos el total de ventas que tuvo cada una de las 10 sucursales\n");
	//Asigno al puntero 'p' la dirección de memoria del inicio de 'sucursal[]':
	p = &sucursal[0];
	//Comenzamos a recorrer el arreglo, utilizando i y *p
	for(i=0;i<10;i++,p++){
		printf("Ingrese cuanto vendio la sucursal %d\n",i+1);
			//Comprobamos datos ingresados:
			comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
			//Purgamos entrada de teclado:
			while(getchar()!='\n');
			//Pedimos datos correctos:
			while(comprobar == 0){
				printf("Solo se admiten numeros!\n");
				printf("Ingrese un numeros entero: ");
				comprobar = (scanf("%lf", p) == 1) ? 1 : 0;
				while(getchar()!='\n');
			}
		}
	//Vuelvo a asignar la dirección de inicio de sucursal[] al puntero:
	p = &sucursal[0];
	//Imprimimos los resultados:
	for(i=0;i<10;i++,p++){
		printf("La sucursal %d vendio $%.2lf \n",i+1,*p);
	}
	return 0;
}
