#include <stdio.h>
int main()
{
	double salario_base;
	double salario_final;
	
	printf("Digite seu salario: ");
	scanf("%lf", &salario_base);
	
	salario_final = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
	
	printf("Seu salario finnal eh: %.2lf", salario_final);
	
	return 0;	
}
