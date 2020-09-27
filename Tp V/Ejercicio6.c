#include <stdio.h>
int main() {
	float celsius, fahrenheit;
	printf("Ingrese temperatura en grados fahrenheit: \n");
	do{
		scanf("%f",&fahrenheit);
		celsius = (float)5/9;
		if(fahrenheit != 999.0){
			if (fahrenheit>=-100 && fahrenheit<=140) {
				celsius = celsius*(fahrenheit-32);
				printf("La temperatura en grados celsius es de: %f\n",celsius);
			} else {
				printf("La temperatura debe estar entre -100 y 140 grados fahrenheit\n");
			}
		}
	}while(fahrenheit != 999.0);
	return 0;
}

