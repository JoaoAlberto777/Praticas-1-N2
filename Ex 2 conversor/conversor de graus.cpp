#include <stdio.h>
#include <locale.h>

	
	float CelsiusFar(float f);
	float FarCelsius(float c);
	float CelsiusKelvin(float k);

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int op;
		float Tc, Tf, Tk;
		printf("Conversor De Temperatura \n");
		printf("Escolha uma opção\n");
		printf("1 -- Celsius para Fahrenheit\n");
		printf("2 -- Fahrenheit para Celsius\n");
		printf("3 -- Celsius para Kelvin\n");
		scanf("%d", &op);
		printf("Digite o Valor da Temperatura");
		
		if(op == 1){
			printf(" Em Celsius: ");
			scanf("%f", &Tc);
			Tf = CelsiusFar(Tc);
		}else if(op == 2){
			printf(" Em Fharenheit: ");
			scanf("%f", &Tf);
			Tc = FarCelsius(Tf);
		}else if(op == 3){
			printf(" Em Celsius ");
			scanf("%f", &Tc);
			Tk = CelsiusKelvin(Tc);
		}
		printf("Temperatura em Celsius é: %.2f°C\n", Tc);
		printf("Temperatura em Fharenheit é: %.2f°F\n", Tf);
		printf("Temperatura em Kelvin é: %.2f°K\n", Tk);
		
		
	}
	float FarCelsius(float f){
		return (f-32)/1.8;
	}
	float CelsiusFar(float c){
		return (c*1.8) + 32;
	}
	float CelsiusKelvin(float c){
		return  (c + 273);
	}
