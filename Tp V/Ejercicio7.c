#include<stdio.h>
#include<stdlib.h>

int main(){
	double comprobar,*p,sucursal[10];
	int i;
	printf("Ingresaremos el total de ventas que tuvo cada una de las 10 sucursales\n");
	p = &sucursal[0];
	for (i=0;i<10;i++){
		*p = 0.0;
	}
	for(i=0;i<10;i++,p++){
		printf("Ingrese cuanto vendio la sucursal %d\n",i+1);
			comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
			while(getchar()!='\n');
			while(comprobar == 0){
				printf("Solo se admiten numeros enteros!\n");
				printf("Ingrese un numeros entero: ");
				comprobar = (scanf("%lf", p) == 1) ? 1 : 0;
				while(getchar()!='\n');
			}
		}
	for(i=0;i<10;i++){
		printf("La sucursal %d vendio $%.2lf \n",i+1,sucursal[i]);
	}
	return 0;
}
