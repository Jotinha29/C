#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int n;
	
	printf("Informe um n�mero: ");
	scanf ("%d", &n);
	
	if(n>10){
		printf("O n�mero � maior que 10.");
	} else if(n<10) {
		printf("O n�mero � menor que 10.");
	} else if(n==10){
		printf("Voc� acertou.");
	}
}
