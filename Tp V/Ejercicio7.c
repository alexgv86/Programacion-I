#include<stdio.h>
#include<stdlib.h>

int main(){
	int sucursal[10];
	int comprobar,i;
	printf("Ingresaremos cuantas ventas tuvo cada una de las 10 sucursales\n");
	for(i=0;i<10;i++){
		printf("Ingrese las ventas para la sucursal %d\n",i+1);
		do{
			comprobar = (scanf("%d",&sucursal[i]) == 1) ? 1 : 0;
			if(comprobar == 0){
				printf("Solo se admiten numeros enteros!\n");
			}
		}while(comprobar==0);
	}
	for(i=0;i<10;i++){
		printf("La sucursal %d tuvo %d ventas\n",i+1,sucursal[i]);
	}
	return 0;
}