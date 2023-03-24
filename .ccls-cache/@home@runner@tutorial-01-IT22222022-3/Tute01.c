/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  	int sub1,sub2,ave;
	
	printf("Enter the first subject mark : ");
	scanf("%d",&sub1);
	
	printf("Enter the second subject mark : ");
	scanf("%d",&sub2);
	
	ave=(sub1+sub2)/2;
	
	printf("Your average mark is :%d ",ave);
  return 0;
}

