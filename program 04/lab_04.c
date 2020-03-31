//Program 04: 	Develop a program to find the reverse of a positive integer and check for palindrome or not.
//		Display appropriate messages.

# include<stdio.h>
int main()
{
	int NUM,reverse=0,temp,remainder;
	printf("Enter a number to check if it is a palindrome or not \n");
	scanf("%d",&NUM);

	if(NUM<=999 || NUM>9999)
	{
		printf("Enter Four Digit Number \n");
		return 0;
	}
	temp=NUM;
	while (temp!=0)
	{
		remainder=temp%10;
		temp=temp/10;
		reverse=reverse*10+remainder;
	}
	printf("Reverse of %d is %d \n",NUM,reverse);
	if(NUM==reverse)
	{
		printf("%d is a palindrome number \n", NUM);
	}
	else
	{
		printf("%d is not a palindrome number \n", NUM);
	}
}
