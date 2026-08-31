#include <stdio.h>
int main()
{
	double base;
	double altura;
	double area;
	
	printf("Digite o valor da base: ");
	scanf("%lf", &base);
	printf("Digite o valor da altura: ");
	scanf("%lf", &altura);
	
	area = (base * altura) / 2;
	
	printf("A area do triangulo eh: %.2lf", area);
	
	return 0;
	
	
	
	
	
}
