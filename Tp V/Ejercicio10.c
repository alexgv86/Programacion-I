#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaro las variables:
	double comprobar,sucursal[3][5],suma,totSuc[3];
	int i,j;
	suma = 0;
	printf("Ingrese cuantas ventas tuvo cada vendedor de cada sucursal\n");
	//Recorro las filas del arreglo:
	for(i=0;i<3;i++){
		//Recorro las columnas del arreglo:
		for(j=0;j<5;j++){
			printf("Ingrese las ventas para el vendedor %d de la sucursal %d\n",j+1,i+1);
				//Comprobamos los datos ingresados:
				comprobar = (scanf("%lf",&sucursal[i][j]) == 1) ? 1 : 0;
				//Purgamos la entrada por teclado:
				while(getchar()!='\n');
				//Solicitamos datos correctos:
				while(comprobar == 0){
					printf("Error! Ingrese un numero: ");
					comprobar = (scanf("%lf",&sucursal[i][j]) == 1) ? 1 : 0;
					while(getchar()!='\n');
				}
		}
	}
	//Recorremos las columnas:
	for(i=0;i<3;i++){
		//Asignamos valor inicial cero a la posición del arreglo:
		totSuc[i]=0;
		//Recorremos las columnas:
		for(j=0;j<5;j++){
			//Sumalizamos el total de los vendedores a la sucursal:
			totSuc[i] = totSuc[i] + sucursal[i][j];
		}
		printf("La sucursal %d vendio: $%.2lf \n",i+1,totSuc[i]);
		//Sumalizamos cada sucursal al total:
		suma += totSuc[i];
	}
	printf("\nEl total de ventas es de: $%.2lf",suma);
	return 0;
}
