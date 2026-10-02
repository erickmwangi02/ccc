// name: Erick mwangi
//reg no:CT100/G/30643/26

#include <stdio.h>

//function prototype
float calculateBill (float units);

int main() {
	float bill,units;
	printf("enter the units consumed: \n");
	scanf ("%f" ,&units);
	//function call
	bill = calculateBill(units);
	
	printf("\n");
	printf("vitaminwater\n");
	printf("================\n");
	printf("number of units consumed:%.2f\n");
	printf("total bill:%.2f\n");
	printf("================\n");
	
	return 0;
	
}
//function defination
float calculateBill(float units){
float bill;
if (units<=100) {
	bill =units*10;
	}	else if (units >= 100 && units <=200)
	{
		bill =units*15;
	}
	else if(units>=200 && units<=100){
		bill =units*20;
	}
	return bill;
}
	