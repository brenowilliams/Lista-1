#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double n_ao_quadrado, n_ao_cubo, raiz_quadrada, raiz_cubica;
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	n_ao_quadrado = pow(n, 2);
	n_ao_cubo = pow(n, 3);
	raiz_quadrada = sqrt(n);
	raiz_cubica = cbrt(n);
	
	printf("%d ao quadrado eh: %.2lf\n", n, n_ao_quadrado);
	printf("%d ao cubo eh: %.2lf\n", n, n_ao_cubo);
	printf("A raiz de %d eh: %.2lf\n", n, raiz_quadrada);
	printf("A raiz cubica de %d eh: %.2lf\n", n, raiz_cubica);
	
	return 0;
}
