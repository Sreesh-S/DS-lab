#include<stdio.h>
void main()
{
	int i,a[5],left,right,n,mid,num;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be search:");
	scanf("%d",&num);
	left=0;
	right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]==num)
		{
			printf("\nElement is found at position %d:",mid);
			break;
		}
	else if(a[mid]>num)
		right=mid-1;
	else
		left=mid+1;
	}
	if(left>right)
	printf("\nElement is not found in the list");
}
