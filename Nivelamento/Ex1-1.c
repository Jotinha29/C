#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, n5, m;

	printf ("Informe sua nota 1: ");
	scanf ("%f", &n1);
	printf ("Informe sua nota 2: ");
	scanf ("%f", &n2);
	printf ("Informe sua nota 3: ");
	scanf ("%f", &n3);
	printf ("Informe sua nota 4: ");
	scanf ("%f", &n4);
	printf ("Informe sua nota 5: ");
	scanf ("%f", &n5);
	
	m = (n1 + n2 + n3 + n4 + n5)/5;
	
	printf("Sua média foi de: %.2f", m);
	
	return 0;
}
