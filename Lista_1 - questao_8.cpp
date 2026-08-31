#include <stdio.h>
int main()
{
	float deposito;
	float taxa;
	float rendimento;
	float valor_total;
	
	printf("Digite o valor ddo deposito: ");
	scanf("%f", &deposito);
	printf("Digite o valor da taxa: ");
	scanf("%f", &taxa);
	
	rendimento = deposito * taxa;
	valor_total = deposito + rendimento;
	
	printf("O valor do rendimento eh: %.2f, e o valor total eh: %.2f", rendimento, valor_total);
	
	return 0;
	
	
	
	
	
}
