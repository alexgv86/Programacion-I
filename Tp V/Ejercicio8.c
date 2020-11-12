#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//Declaro las variables y les asigno cero para iniciar:
	double *p,sucursal[10],suma;
	//Asigno cero a los arreglos, apuntando su primer valor, luego
	//la asignación que es cero y luego la cantidad de valores
	//multiplicado por el tamaño de su tipo de variable
	memset(&sucursal[0],0,10*sizeof(double));
	int comprobar,i = 0;
	//Asigno al puntero 'p' la dirección de memoria del inicio de sucursal[]:
	p = &sucursal[0];
	printf("Ingresaremos cuantas ventas tuvo cada una de las 10 sucursales\n");
	//Recorremos el arreglo utilizando el puntero:
	for(i=0;i<10;i++,p++){
		printf("Ingrese las ventas para la sucursal %d\n",i+1);
			//Comprobamos los datos ingresados:
			comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
			//Purgamos los valores de teclado:
			while(getchar()!='\n');
			//Solicitamos datos correctos:
			while(comprobar == 0){
				printf("Solo se admiten numeros enteros!\n");
				printf("Ingrese un numero entero: ");
				comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
				while(getchar()!='\n');
			}
	}
	p = &sucursal[0];
	for(i=0;i<10;i++,p++){
		//Imprimimos los valores para cada sucursal:
		printf("La sucursal %d vendio $%.2lf \n",i+1,*p);
		//Sumamos los valores ingresados:
		suma += *p;
	}
	//Imprimimos el resultado total:
	printf("\nEl total en ventas fue de: $%.2lf",suma);
	return 0;
}
