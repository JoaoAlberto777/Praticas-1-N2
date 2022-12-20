#include <stdio.h>
#include <locale.h>

	char* isNegative(int N){
		if(N >=0){
			return "Falso";
		}
		return "Verdadeiro";
	}

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int Num;
		printf("Digite um Número: ");
		scanf("%d", &Num);
		char* b = isNegative(Num);
		printf("O Numero é Negativo? \n%s", b);
		
		return 0;
	}
