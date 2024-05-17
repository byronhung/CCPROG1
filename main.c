#include <stdio.h>
	
int main() {
	char name;
	char cProduct;
	float fPrice, fTotal;
	int quantity;
	


	printf("WHat is the first letter of your name?\n");
	scanf("%c", &name);

	
	printf("Welcome %c, what would you like to purchase?\n", name);
	scanf("%c", &cProduct);


	printf("What is the price of the product?\n");
	scanf("%f", &fPrice);

	printf("How many %c would you like to buy?\n", cProduct);
	scanf("%d", &quantity);


	fTotal = fPrice * quantity;

	printf("Your total will be : P%.2f", fTotal);



return 0;
}
