//Surface Area of a Rectangular Prism 2ab + 2bc + 2ac = surfaceArea

#include <stdio.h>

int main ()
{
	float a;
	float b;
	float c;
	float surfaceArea;
	
	printf("Please enter A:");
	scanf("%f", &a);
	printf("Please enter B:");
	scanf("%f", &b);
	printf("Please enter C:");
	scanf("%f", &c);
	surfaceArea = (2 * (a*b)) + (2 * (b*c)) + (2 * (a*c)); 
	printf ("The surface area of your Rectangular Prism is %.3f\n", surfaceArea);
	return 0;
}