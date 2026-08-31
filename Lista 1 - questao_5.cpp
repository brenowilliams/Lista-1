#include <stdio.h>
int main()
{
	float salario;
	float taxa;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Digite sua taxa sobre salario: ");
	scanf("%f", &taxa);
	
	salario =  salario + (salario * taxa);
	
	printf("Seu salario final eh: %.2f", salario);
	
	return 0;
}
