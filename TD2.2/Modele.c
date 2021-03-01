#include <stdlib.h>
#include <stdio.h>

void main() {
	int somme = 0;
	for (int i = 0;i < 100;i++) {
		somme += i;
	}
	printf("La somme des 100 premiers entiers = %d", somme);
}