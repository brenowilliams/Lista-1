#include <stdio.h>
#include <math.h>
int main()
{
	double pes, jarda, milhas, polegadas;
	
	printf("Digite um valor em pes: ");
	scanf("%lf", &pes);
	
	polegadas = (pes * 12);
	jarda = (pes * 3);
	milhas = (jarda * 1760);
	
	printf("%.2lf pes em polegadas eh: %.2lf polegadas.\n", pes, polegadas);
	printf("%.2lf pes em jardas eh: %.2lf jardas.\n", pes, jarda);
	printf("%.2lf pes em milhas eh: %.2lf milhas.\n", pes, milhas);
	
	
	return 0;
}
