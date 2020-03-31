/*Program 07: 	Implement using functions to check whether the given number is prime and display
		appropriate messages. (No built-in math function)
*/

#include<stdio.h>
int isprime(int m)
{
	int i;
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	printf("Enter a +ve integer :");
	scanf("%d",&n);
	if (isprime(n))
		printf("%d is prime number\n",n);
	else
		printf("%d is not prime number\n",n);
	return 0;
}
