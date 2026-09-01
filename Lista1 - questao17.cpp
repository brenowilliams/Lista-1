#include <stdio.h>
#include <math.h>
int main()
{
	double salario, cpmf, saque1, saque2;
	
	printf("Digite seu salario: \n");
	scanf("%lf", &salario);
	
	printf("Digite seu primeiro saque: \n");
	scanf("%lf", &saque1);
	printf("Digite seu segundo saque: \n");
	scanf("%lf", &saque2);
	
	cpmf = salario - saque1 - saque2 - (saque1 * (0.0038) + saque2 * (0.0038));
	
	printf("O seu saldo bancario eh R$ %.2lf.", cpmf);
	
	return 0;
	
}
	
