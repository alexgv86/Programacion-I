#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//Declaro las variables y les asigno el valor cero:
	double comprobar,sucursal[3][5],suma;
	//Asigno cero a los arreglos, apuntando su primer valor, luego
	//la asignación que es cero y luego la cantidad de valores
	//multiplicado por el tamaño de su tipo de variable
	memset(&sucursal[0][0],0,15*sizeof(double));
	int i,j = 0;
	printf("Ingrese cuanto vendio cada vendedor de cada sucursal\n");
	//Ingreso los valores:
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Ingrese lo vendido por el vendedor %d de la sucursal %d\n",j+1,i+1);
				//Comprobamos el ingreso de datos:
				comprobar = (scanf("%lf",&sucursal[i][j]) == 1) ? 1 : 0;
				//Purgo lo ingresado por teclado:
				while(getchar()!='\n');
				//Solicito datos correctos:
				while(comprobar == 0){
					printf("Error! Ingrese un numero: ");
					comprobar = (scanf("%lf",&sucursal[i][j]) == 1) ? 1 : 0;
					while(getchar()!='\n');
				}
		}
	}
	//Imprimo los resultados
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			suma += sucursal[i][j];
		}
		printf("La sucursal %d vendio: $%.2lf \n",i+1,suma);
		suma = 0;
	}
	printf("\n Fin del programa");
	return 0;
}
