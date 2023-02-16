#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int b, h, A;
	
	printf("Informe a base do triângulo: ");
	scanf ("%d", &b);
	printf("Informe a altura do triângulo: ");
	scanf ("%d", &h);
	
	A = (b*h)/2;
	
	printf("Área do triângulo: %d", A);
	
}
