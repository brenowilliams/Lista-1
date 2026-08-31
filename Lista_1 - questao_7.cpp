#include <stdio.h>
int main()
{
	float salario_base;
	float salario_final;
	
	printf("Digite seu salario base: ");
	scanf("%f", &salario_base);
	
	salario_final = salario_base + 50 - (salario_base * 0.1);
	
	printf("Seu salario final eh: %.2f", salario_final);
	
	return 0;
}
	
