/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
  	int num1,num2,min,max,mul;
	
	printf("Enter a value for no 1 : ");
	scanf("%d",&num1);
	
	printf("Enter a value for no 2 : ");
	scanf("%d",&num2);
	
    min=minimum(num1,num2);
    max=maximum(num1,num2);
    mul=multiply(num1,num2);
    
    printf("Minimum number is : %d\n",min);
    printf("Maximum number is : %d\n",max);
    printf("Multiply : %d",mul);

return 0;
	
}
int minimum(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	
	else
	{
		return b;
	}
}
int maximum(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int multiply(int a,int b)
{
	return a*b;
}
