#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int n;
	
	printf("Informe um número: ");
	scanf ("%d", &n);
	
	if(n>10){
		printf("O número é maior que 10.");
	} else if(n<10) {
		printf("O número é menor que 10.");
	} else if(n==10){
		printf("Você acertou.");
	}
}
