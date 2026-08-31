#include <stdio.h>
int main()
{
	float n1, n2, n3;
	float media;
	
	printf("Digite a suas notas separadas por virgula: \n");
	scanf("%f, %f, %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("Sua nota final eh: %.2f", media);
	
	return 0;
}
