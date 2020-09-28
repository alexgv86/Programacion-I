#include<stdio.h>
#include<stdlib.h>

int main(){
	int sucursal[3][5];
	int totSuc[3];
	int comprobar,i,j,suma;
	suma = 0;
	printf("Ingrese cuantas ventas tuvo cada vendedor de cada sucursal\n");
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Ingrese las ventas para el vendedor %d de la sucursal %d\n",j+1,i+1);
				comprobar = (scanf("%d",&sucursal[i][j]) == 1) ? 1 : 0;
				if(comprobar == 0){
					printf("Solo se admiten numeros enteros!\n");
					return 0;
				}
		}
	}
	for(i=0;i<3;i++){
		totSuc[i]=0;
		for(j=0;j<5;j++){
			totSuc[i] = totSuc[i] + sucursal[i][j];
		}
		printf("La sucursal %d tuvo %d ventas\n",i+1,totSuc[i]);
		suma += totSuc[i];
	}
	printf("\nEl total de ventas es: %d",suma);
	return 0;
}
