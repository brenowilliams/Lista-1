#include <stdio.h>
int main()
{
	float n1, n2, n3;
	int peso_n1, peso_n2, peso_n3;
	float media_ponderada;
	
	printf("Digite sua nota separada por virgula: \n");
	scanf("%f, %f, %f", &n1, &n2, &n3);
	printf("Digite o peso de cada nota separada por virgula: \n");
	scanf("%d, %d, %d", &peso_n1, &peso_n2, &peso_n3);
	
	media_ponderada = ((n1 * peso_n1) + (n2 * peso_n2) + (n3 *peso_n3)) / (peso_n1 + peso_n2 + peso_n3);
	
	printf("Sua nota final eh: %.2f", media_ponderada);
	
	return 0;
}
