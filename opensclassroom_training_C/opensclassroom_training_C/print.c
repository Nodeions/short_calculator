#include "print.h"

int isContinuing(int isContinue) {
	printf("Voulez-vous continuer ?\n\n0: Exit\n1: Continue\n");
	scanf_s("%d", &isContinue);
	while (isContinue != 0 && isContinue != 1) {
		printf("Entree non reconnue\n\n0: Exit\n1: Continue\n");
		scanf_s("%d", &isContinue);
	}
	return isContinue;
}

void choiceCalcul(int *choice) {

	while (*choice != 1 && *choice != 2 && *choice != 3 && *choice != 4 && *choice != 5) {
		printf("%d\n", *choice);
		printf("Choisissez le type de calcul :\n\n");
		printf("1: Addition\n2: Soustraction\n3: Multiplication\n4: Division\n5: Puissance\n");
		scanf_s("%d", choice);
	}
}