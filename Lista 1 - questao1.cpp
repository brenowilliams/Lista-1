#include <stdio.h>
int main()
{
	int n1, n2, n3, n4;
	int soma;
	
	printf("Digite 4 numeros sepados por espacos: \n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma dos 4 numeros eh: %d", soma);
	
	return 0;
}
