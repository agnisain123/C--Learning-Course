/*
 * Author : DeathNaughT-
 * Date : 12/07/2019 . 
 * This is my first C program. Just a basic prgram to test the syntax of the language.
 * I've been using java for so long but it turns ut that it's one of the slowest languages.
 * C, the mother of all programming languages - syntax is almost same as that of java.
 */
#include <stdio.h>
void main()
{
	//This function prints the diamond patter of numbers using simple for loops. 
	int i=0,j=0;
	scanf("%d",&j);
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=5;j>i;j--)
			printf("  ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=5;j>i;j--)
			printf("  ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}	
}
/* For any doubts or advices regarding this program, please do comment! */

