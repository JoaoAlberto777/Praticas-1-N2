#include <stdio.h>
#include <locale.h>

	int maior(int num1,int num2){
		int maior, dobro;
		if(num1 > num2){
			maior = num1;
		}else{
			maior = num2;
		} dobro = maior * 2;
		return dobro;
	}
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int N1, N2, d;
		printf("Digite N1: ");
		scanf("%d", &N1);
		printf("Digite N2: ");
		scanf("%d", &N2);
		d= maior(N1,N2);
		printf("O dobro do maior numero é %d", d);
		return 0;
	}
