#include<stdio.h>
void main()
{
	int i,n,a[10],key;
	printf("Enter the limit of the array : \n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array elements are :\n");
	for(i=0;i<n;i++)
	printf("%d \n",a[i]);
	printf("Enter the element to search : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
		printf("%d found at the position %d",key,i+1);
		break;
	}
	if(a[i]==n)
	printf("Element not found!!");
	}
}
