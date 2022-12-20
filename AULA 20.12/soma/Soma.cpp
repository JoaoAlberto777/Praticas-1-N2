#include <stdio.h>
#include <locale.h>

	float Soma (float N1, float N2){
		return N1 + N2;
}
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float Num1, Num2, R;
		printf("Digite N1: ");
		scanf("%f", &Num1);
		printf("Digite N2: ");
		scanf("%f", &Num2);
		
		R = Soma(Num1, Num2);
		printf("A Soma de %.2f e %.2f é: %.2f", Num1, Num2, R);
		
		return 0;
		
		}
