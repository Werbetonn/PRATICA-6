#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int pessoaA, pessoaB;
	
	printf("Programna para descobrir se os dois ganham desconto");
	
	printf("\nDigite sua idade: ");
	scanf("%d", &pessoaA);
	
	printf("Digite sua idade: ");
	scanf("%d", &pessoaB);
	
	if (pessoaA%2==0) {
		printf ("DESCONTO");
	}

	return 0;
}
