#include <stdio.h>

int main() {
		
	int DD, MM, YYYY;

	printf("Escribe el dia que naciste ( Dos numeros )");
	scanf_s("%d", &DD);

	printf("Escribe el dia que naciste ( Dos numeros )");
	scanf_s("%d", &MM);

	printf("Escribe el año que naciste ( Cuatro numeros )");
	scanf_s("%d", &YYYY);

	printf("La suma de los numeros es: ");
	printf("%d + %d + %d", &DD, &MM, &YYYY);

}

