#include "table.h"

void createTable() {

	int table[4] = {0,4,3,8};

	/*for (int i = 0; i < 4; i++) {
		table[i] = 0;
	}*/

	printTableau(table, 4);
	sommeTableau(table, 4);
	
}

void printTableau(int table[], int length) {
	
	for (int i = 0; i < length; i++) {
		printf("%d\n", table[i]);
	}
}

void sommeTableau(int table[],int length) {
	int x = 0;
	for (int i = 0; i < length; i++) {
		x += table[i];
	}
	moyenneTableau((float)x, (float)length);
	printf("Somme du tableau : %d\n", x);
}

void moyenneTableau(float somme, float totalItem) {
	somme /= totalItem;
	printf("Moyenne du tableau : %.01f\n", (float)somme);
}