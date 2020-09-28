#include<stdio.h>
#include<stdlib.h>

int main(){
	//Empresa dividida en 3 zonas, 4 sucursales y 2 vendedores
	int zona,suc,vend,cantZona,cantSuc,cantVend;
	double comprobar,total;
	total = 0;
	printf("Totalizaremos todas las ventas de la empresa:\n");
	printf("Ingrese cuantas zonas tendra la misma:\n");
	scanf("%d",&cantZona);
	printf("Ingrese cantidad de sucursales:\n");
	scanf("%d",&cantSuc);
	printf("Ingrese cantidad de vendedores por sucursal:\n");
	scanf("%d",&cantVend);
	double empresa[cantZona][cantSuc][cantVend];
	double totZona[cantZona];
	double totSuc[cantSuc];
	for(zona=0;zona<cantZona;zona++){
		for(suc=0;suc<cantSuc;suc++){
			for(vend=0;vend<cantVend;vend++){
				printf("Ingrese las ventas para el vendedor %d "
						"de la sucursal %d de la zona %d\n",
						vend+1,suc+1,vend+1);
					comprobar = (scanf("%lf",&empresa[zona][suc][vend]) == 1) ? 1 : 0;
					if(comprobar == 0){
						printf("Solo se admiten numeros!\n");
						return 0;
					}
			}
		}
	}
	for(zona=0;zona<cantZona;zona++){
		totZona[zona]=0;
		printf("\n\nEn la zona %d se obtuvieron los siguientes resultados:",zona+1);
		for(suc=0;suc<cantSuc;suc++){
			totSuc[suc]=0;
			printf("\nLa sucursal %d obtuvo:\n",suc+1);
			for(vend=0;vend<cantVend;vend++){
				totSuc[suc] = totSuc[suc]+empresa[zona][suc][vend];
				printf("Vendedor %d : $%.2lf\n",vend+1,empresa[zona][suc][vend]);
			}
			printf("Total de la sucursal %d: $%.2lf\n",suc+1,totSuc[suc]);
			totZona[zona] = totZona[zona] + totSuc[suc];
		}
		printf("\nTotal de la zona %d: $%.2lf",zona+1,totZona[zona]);
		total += totZona[zona];
	}
	printf("\nEl total de ventas es: $%.2lf",total);
	return 0;
}
