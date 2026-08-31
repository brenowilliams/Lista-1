#include <stdio.h>
int main()
{
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	salario =  salario + (salario * 0.25);
	
	printf("Seu salario final eh: %.2f", salario);
	
	return 0;
	
}

