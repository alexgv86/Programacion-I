#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaro las variables:
	double comprobar,sucursal[3][5],suma;
	int i,j = 0;
	printf("Ingrese cuantas ventas tuvo cada vendedor de cada sucursal\n");
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
