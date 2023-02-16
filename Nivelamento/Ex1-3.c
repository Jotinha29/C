#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	
	printf("Informe sua idade: ");
	scanf ("%d", &i);
	
	if(i<30){
		printf("VOCÊ É MUITO JOVEM!");
	}
}
