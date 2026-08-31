#include <stdio.h>
#include <math.h>
int main()
{
	int ano_de_nascimento, ano_atual, idade, idade_em_2050;
	
	printf("Digite o ano da sua data de nascimento: \n");
	scanf("%d", &ano_de_nascimento);
	printf("Digite o ano atual: \n");
	scanf("%d", &ano_atual);
	
	idade = (ano_atual - ano_de_nascimento);
	idade_em_2050 = (2050 - ano_de_nascimento);
	
	printf("Voce tem %d anos e em 2050 voce tera %d", idade, idade_em_2050);
	
	
	return 0;
}
