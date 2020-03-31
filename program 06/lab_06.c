// Program 06: Introduce 1D Array manipulation and implement Binary search.: 	


#include <stdio.h>
int main()
{
	int a[50], key, i, n , low, high,mid, found =0;
	printf("\n Enter the number of elements in the array:"); 
	scanf ("%d", &n);
	printf (" \n Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter the key to be searched: \n" );
	scanf ("%d", &key);
	low = 0;
	high = n-1;
	while (low <=high)
	{
		mid= (low+ high)/2;
		if (a[mid] == key)
		{
			printf("\n %d is present at the position = %d", key, mid+1);
			found=1;
			break;
		}
		if (a[mid]>key)
			high = mid-1;
		else
			low = mid+1;
	}
	if(!found)
		printf("Key not found");
	return 0;
}
