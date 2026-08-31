#include <stdio.h>
#include <math.h>
int main()
{
	int n1, n2;
	int n1_elevado_a_n2, n2_elevado_a_n1;
	
	printf("Digite dois numeros separados por espacos: \n");
	scanf("%d %d", &n1, &n2);
	
	n1_elevado_a_n2 = pow(n1, n2);
	n2_elevado_a_n1 = pow(n2, n1);
	
	printf("%d elevado a %d eh igual a: %d\n", n1, n2, n1_elevado_a_n2);
	printf("%d elevado a %d eh igual a: %d\n", n2, n1, n2_elevado_a_n1);
	
	return 0;
}
