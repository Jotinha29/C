#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int b, h, A;
	
	printf("Informe a base do tri�ngulo: ");
	scanf ("%d", &b);
	printf("Informe a altura do tri�ngulo: ");
	scanf ("%d", &h);
	
	A = (b*h)/2;
	
	printf("�rea do tri�ngulo: %d", A);
	
}
