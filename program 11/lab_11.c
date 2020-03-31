//	Develop a program to sort the given set of N numbers using Bubble sort.

#include<stdio.h>
void main()
{
	int n,i,j,a[10],temp;
	printf("Enter the no. of elements :\n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i = 0 ; i < n ; i++)
		scanf("%d",&a[i]);
	printf("The original elements are \n");
	for(i = 0 ; i < n ; i++)
		printf("%d ",a[i]);
	for(i= 0 ; i < n-1 ; i++) // Number of Passes
	{
		for(j= 1 ; j< n-1; j++) // Comparisons
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n The Sorted elements are \n");
	for(i = 0 ; i < n ; i++)
		printf("%d\t ",a[i]);
}

