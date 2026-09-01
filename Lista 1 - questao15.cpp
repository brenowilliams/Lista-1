#include <stdio.h>
#include <math.h>
int main()
{
	float preco_facrica, lucro_distribuidor, imposto, preco_final;
	
	printf("Digite o preco de fabrica do veiculo: \n");
	scanf("%f", &preco_facrica);
	printf("Digite o percentual de lucro do distribuidor sobre o veiculo: \n");
	scanf("%f", &lucro_distribuidor);
	printf("Digite o percetual de impostos: \n");
	scanf("%f", &imposto);
	
	lucro_distribuidor = (preco_facrica * lucro_distribuidor);
	imposto = (preco_facrica * imposto);
	preco_final = preco_facrica + lucro_distribuidor + imposto;
	
	printf("O valor do lucro do distribuidor sobre o veiculo: R$ %.2f\n", lucro_distribuidor);
	printf("O valor do imposto sobre o valor do veiculo: R$ %.2f\n", imposto);
	printf("O valor final do veiculo: R$ %.2f\n", preco_final);
	
	return 0;
}
