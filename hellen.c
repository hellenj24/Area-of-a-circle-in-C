//A PROGRAM TO FIND THE AREA OF A CIRCLE
#include <stdio.h>
int main()
{
	float r,area;//declaring variables
	
	printf("enter the radius of the circle\n");// output to user
	scanf("%f",&r);//input by user
	
	area=(3.142*r*r);//formula to find area
	
	printf("The area is %f\n",area);//out put of area
	
	
	return 0;
}