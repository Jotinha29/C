#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nF, p, a, x;
	
	printf("Informe a nota final do aluno: ");
	scanf ("%f", &nF);
	printf("Informe o n�mero de aulas ministradas dessa mat�ria: ");
	scanf ("%f", &a);
	printf("Informe o n�mero de presen�as do aluno nesta mat�ria: ");
	scanf ("%f", &p);
	
	x = (p*100)/a;
	
	printf("Nota final: %.2f\n", nF);
	printf("Porcentagem de presen�a: %.2f\n", x);
	if(nF>=6 && x>=75){
		printf("APROVADO\n");
	} else {
		printf("REPROVADO\n");
	}
}
