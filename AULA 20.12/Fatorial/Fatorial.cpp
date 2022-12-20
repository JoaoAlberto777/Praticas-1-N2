#include <stdio.h>
#include <locale.h>

	int fatorial(int N){
		int fat = 1;
		for(int i = N; i > 1; i--){
			fat = fat * i;
		}
		return fat;
	}
	
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int Num, F;
		printf("Digite um Número: ");
		scanf("%d", &Num);
		F = fatorial(Num);
		printf("O fatorial de %d é: %d ",Num, F);
	
		return 0;
	}
