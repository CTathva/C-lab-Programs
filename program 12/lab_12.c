//	Develop a program to find the square root of a given number N and execute foe all
//	possible inputs with appropriate messages. 
//	Note: Don’t use library function sqrt(n).


#include<stdio.h>
#include<math.h>
void main()
{
	float num,square_root,temp=0;
	printf("Enter the number to find square root\n");
	scanf("%f",&num);
	square_root=num/2;
	while(square_root!=temp)
	{
		temp=square_root;
		square_root=(num/square_root+square_root)/2;
	}
	printf("Square Root of %f is %f\n",num,square_root);
	printf("Square Root of %f using inbuilt Function is %f\n",num,sqrt(num)); 
}
