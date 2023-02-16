#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nF, p, a, x;
	
	printf("Informe a nota final do aluno: ");
	scanf ("%f", &nF);
	printf("Informe o número de aulas ministradas dessa matéria: ");
	scanf ("%f", &a);
	printf("Informe o número de presenças do aluno nesta matéria: ");
	scanf ("%f", &p);
	
	x = (p*100)/a;
	
	printf("Nota final: %.2f\n", nF);
	printf("Porcentagem de presença: %.2f\n", x);
	if(nF>=6 && x>=75){
		printf("APROVADO\n");
	} else {
		printf("REPROVADO\n");
	}
}
