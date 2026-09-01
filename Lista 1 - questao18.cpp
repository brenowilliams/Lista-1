#include <stdio.h>
#include <math.h>
int main()
{
	int peso_racao, g_de_racao, resto_racao;
	
	printf("Digite quantas g tem o pacote de racao dos gatos: \n");
	scanf("%d", &peso_racao);
	
	printf("Digite a quantidade de racao dada aos seus gatos por dia: \n");
	scanf("%d", &g_de_racao);
	
	resto_racao = peso_racao - ((g_de_racao * 5)* 2);
	
	printf("O resto de racao apos 5 dias eh: %dg.", resto_racao);
	
	return 0;
	
}
	
