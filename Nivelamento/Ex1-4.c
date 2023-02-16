#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	
	printf("Informe sua idade: ");
	scanf ("%d", &i);
	
	if(i>70){
		printf("VELHO");
	} else if(i<21) {
		printf("JOVEM");
	} else {
		printf("ADULTO");
	}
}
