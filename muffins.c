#include <stdio.h>
#define PRICE 0.60 
#define hst 0.13

int main () {

	int muffins;
	float total;

	printf("please input the numbers of muffins you want to buy: ");
	scanf("%d", &muffins);

	if (muffins<6)
		total = muffins * PRICE +muffins*PRICE + hst;

		else
			total = muffins*PRICE;

		
		printf("The muffins will cost: $ %.2f\n", total);



		return 0;





}