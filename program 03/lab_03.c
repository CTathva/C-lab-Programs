//	Develop a program to compute the roots of a quadratic equation by accepting the
//	coefficients. Print appropriate messages.

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	float root1,root2;
	float determinant,real,imaginary;
	printf("Enter the Co-efficient of Quadratic Equation\n");
	scanf("%f%f%f",&a,&b,&c);
	determinant=b*b-4*a*c;
	if(a==0 && b==0)
	{
		printf("INVALID INPUTS\n");
	}
	else if(a==0)
	{
		printf("LINEAR EQUATION\n");
		root1=-c/b;
		printf("ROOT=%f\n",root1);
	}
	else if(determinant==0)
	{
		printf("ROOTS ARE REAL AND EQUAL\n");
		root1=-b/(2*a);
		root2=-b/(2*a);
		printf("Root1=%f\n Root2=%f",root1,root2);
	}
	else if(determinant>0)
	{
		printf("ROOTS ARE REAL AND DISTINCT\n");
		root1=(-b+(sqrt(fabs(determinant))))/(2*a);
		root2=(-b-(sqrt(fabs(determinant))))/(2*a);
		printf("ROOT1=%f\n ROOT2=%f",root1,root2);
	}
	else
	{
		printf("ROOTS ARE IMAGINARY\n");
		real=-b/(2*a);
		imaginary=sqrt(fabs(determinant))/(2*a);
		printf("ROOT1=%f+i%f\n",real,imaginary);
		printf("ROOT2=%f-i%f\n",real,imaginary);
	}
}
