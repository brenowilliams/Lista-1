#include <stdio.h>
#include <math.h>
int main() 
{
	double raio;
	double pi = 3.14;
	double area;
	
	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);
	
	area = pi * pow(raio, 2);
	
	printf("A area da circunferencia eh: %.2lf", area);
	
	return 0;
	
}
