/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1 , mark2 , total;
	float avg;
	printf("Enter marks of 2 subjects:");
	scanf("%d %d", &mark1, &mark2);
	
	total = mark1 + mark2 ;
	avg =(float)total / 2 ;
	
	printf("Average :%.2f", avg);
  return 0;
}

