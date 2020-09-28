#include<stdio.h>
#include<stdlib.h>

int main(){
	//Empresa dividida en 3 zonas, 4 sucursales y 2 vendedores
	double empresa[3][4][2];
	double totZona[3];
	double totSuc[4];
	int zona,suc,vend;
	double comprobar,total;
	total = 0;
	printf("Totalizaremos todas las ventas de la empresa:\n");
	for(zona=0;zona<3;zona++){
		for(suc=0;suc<4;suc++){
			for(vend=0;vend<2;vend++){
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
	for(zona=0;zona<3;zona++){
		totZona[zona]=0;
		printf("\n\nEn la zona %d se obtuvieron los siguientes resultados:",zona+1);
		for(suc=0;suc<4;suc++){
			totSuc[suc]=0;
			printf("\nLa sucursal %d obtuvo:\n",suc+1);
			for(vend=0;vend<2;vend++){
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
