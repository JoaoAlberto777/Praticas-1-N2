#include <stdio.h>
#include <locale.h>

	int dobro(int num){
		int d;
		d = 2 * num;
		return d;
	}
	
	int main (){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int N, d;
		printf("\nDigite um Número: ");
		scanf("%d", &N);
		d = dobro(N);
		printf("O dobro de %d é: %d\n",N, d);
		
		
		return 0;
	}
