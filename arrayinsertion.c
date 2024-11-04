#include<stdio.h>
void main()
{
int a[10],n,i,pos,in;
printf("\nEnter the limit of the array ");
scanf("%d",&n);
printf("\nEnter the array elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array elements are \n");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
printf("\nEnter the position to be inserted \n");
scanf("%d",&pos);
printf("Enter the element to be inserted \n");
scanf("%d",&in);
for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos-1]=in;
n++;
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
