#include<stdio.h>
#include<stdlib.h>

int main(){
	int sucursal[10];
	int comprobar,i,suma;
	printf("Ingresaremos cuantas ventas tuvo cada una de las 10 sucursales\n");
	for(i=0;i<10;i++){
		printf("Ingrese las ventas para la sucursal %d\n",i+1);
			comprobar = (scanf("%d",&sucursal[i]) == 1) ? 1 : 0;
			suma += sucursal[i];
			if(comprobar == 0){
				printf("Solo se admiten numeros enteros!\n");
				return 0;
			}
	}
	for(i=0;i<10;i++){
		printf("La sucursal %d tuvo %d ventas\n",i+1,sucursal[i]);
	}
	printf("\nEl total de ventas es: %d",suma);
	return 0;
}
