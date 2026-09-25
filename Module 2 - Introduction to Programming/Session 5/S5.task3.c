//Create a Flipkart discount calculator that asks the user for the total cart amount.
//Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000,apply 10% 
//discount;else,no discount.Print the final amount to pay.Hint:Use nested ifs to check each discount slab.

#include<stdio.h>
	void main()
{
	int amt,disc,total;
	printf("Enter your amount : ");
	scanf("%d",&amt);
	
	if (amt>1000){	
		if(amt>2000){
		disc=amt*20/100;
	}
	else {
		disc=amt*10/100;
	}
   } else {
   		disc=0;
   }
   	total=amt-disc;
   	printf("Total amount is %d",total);
}
