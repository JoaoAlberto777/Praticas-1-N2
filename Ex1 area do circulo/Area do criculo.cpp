#include <stdio.h>
#include <locale.h>
#define PI 3.14
	float areaDoCirculo(float raio){
		float Area;
		Area = PI * raio * raio;
		
		return Area;
	}
	
	
int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float r, a;
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	a = areaDoCirculo(r);
	printf("A area do circulo é %.2f cm\n", a);
	
	return 0;
}
