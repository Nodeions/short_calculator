#include "maths.h"

void calcul(int *choice, int *num1, int *num2, int *result) {

	switch (*choice) {
	case 1:
		*result = *num1 + *num2;
		printf("%d + %d = %d\n", *num1, *num2, *result);
		break;
	case 2:
		*result = *num1 - *num2;
		printf("%d - %d = %d\n", *num1, *num2, *result);
		break;
	case 3:
		*result = *num1 * *num2;
		printf("%d * %d = %d\n", *num1, *num2, *result);
		break;
	case 4:
		*result = *num1 / *num2;
		int rest = *num1 % *num2;
		printf("%d / %d = %d et reste %d\n", *num1, *num2, *result, rest);
		break;
	case 5:
		*result = pow(*num1, *num2);
		printf("%d puissance %d = %d\n", *num1, *num2, *result);
		break;
	default:
		printf("error");
		break;
	}
}

void askInt(int *num) {
	printf("Entrez un nombre\n");
	scanf_s("%d", num);
}