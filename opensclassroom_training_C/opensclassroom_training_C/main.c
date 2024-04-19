#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "maths.h"
#include "print.h"
#include "table.h"


int main() {

	createTable();
	int isContinue = 1;

	while (isContinue == 1) {

		int num1 = 0, num2 = 0, result = 0, choice = 0;
		int* ptNum1 = &num1;
		int* ptNum2 = &num2;
		int* ptResult = &result;
		int* ptChoice = &choice;

		choiceCalcul(ptChoice);

		askInt(ptNum1);
		askInt(ptNum2);

		calcul(ptChoice, ptNum1, ptNum2, ptResult);
		isContinue = isContinuing(isContinue);
	}
	return 0;
}





