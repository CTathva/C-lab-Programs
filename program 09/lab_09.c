//	Develop a Program to compute Sin(x) using Taylor series approximation. Compare
//	your result with the built-in Library function. Print both the results with appropriate messages.


#include<stdio.h>
#include<math.h>
void main()
{
	int i, degree;
	float x, sum=0,term;
	printf("Enter the value of degree");
	scanf("%d",&degree);
	x = degree * (3.1416/180);
	term = x;
	sum=term;
	for (i=3;i<=degree;i+=2)
	{
		term=-term*x*x/((i-1)*i);
		sum=sum+term;
	}
	printf("The sine of %d is %.3f\n", degree, sum);
	printf("The sine function of %d using library function is %.3f", degree, sin(x));
}
