// Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the
// final price of a Zomato order with a given base price.Constraint:
// he GST rate must not be changeable after its initial assignment.

#include<stdio.h>
	void main()
{
	const float GST=18.0;
	float productprice=500.0;
	float gstamount;
	float finalprice;
	
	gstamount=productprice*GST/100;
	finalprice=productprice+gstamount;
	
	printf("Product price : %2.f\n",productprice);
	printf("GST rate : %2.f\n",GST);
	printf("GST amount : %2.f\n",gstamount);
	printf("FInalprice : %2.f\n",finalprice);
	
}
