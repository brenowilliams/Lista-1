#include <stdio.h>
#include <math.h>
int main()
{
	
	float horas_trabalhadas, hora, salario_minimo, salario_bruto,  imposto;
	
	printf("Digite suas horas trabalhadas: \n");
	scanf("%f", &horas_trabalhadas);
	printf("Digite o seu salario: \n");
	scanf("%f", &salario_minimo);

	hora = (salario_minimo/2);
	salario_bruto = hora * horas_trabalhadas;
	imposto = (salario_bruto * 0.03);
	salario_minimo = salario_bruto - imposto;
		
	printf("A sua hora trabalhada vale: %.2f\n.", hora);
	printf("O salario bruto equivale a %.2f\n.", salario_bruto);
	printf("O imposto sobre o seu salario equivale a %.2f\n.", imposto);
	printf("O seu salario a receber eh: %.2f\n.", salario_minimo);

	

	return 0;
}
