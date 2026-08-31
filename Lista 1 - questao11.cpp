#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int n_ao_quadrado, n_ao_cubo, raiz_quadrada, raiz_cubica;
	do {
		printf("Digite um numero maior e diferente que 0: \n");
		scanf("%d", &n);
		if (n<0) {
			printf("ERRO: O numero tem que ser maior e diferente que 0 \n");
		}
	}
	while (n>0);
	
	n_ao_quadrado = pow(n, 2);
	n_ao_cubo = pow(n, 3);
	raiz_quadrada = sqrt(n);
	raiz_cubica = cbrt(n);
	
	printf("Seu numero ao quadrado eh: %d", n_ao_quadrado);
	
	return 0;
}
