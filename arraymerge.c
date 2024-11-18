#include<stdio.h>
void main()
{
  int a[10],b[10],c[10],j,m,k,i,n,size;
  printf("Enter the size of the first array:\n");
  scanf("%d",&n);
  printf("Enter the size of the second array:\n");
  scanf("%d",&m);
  printf("Enter the first array element:\n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the scond array element:\n");
  for (i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  printf("\n The first array elements:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n The second array elements:\n");
  for(i=0;i<m;i++)
  {
    printf("%d\t",b[i]);
  }
  size=n+m;
  for (i=0;i<n;i++)
  {
  c[i]=a[i];
  }
  for (i=0;i<m;i++)
  {
  c[i+n]=b[i];
  }
  for (i=0;i<size;i++)
  {
    for (j=i;j<size;j++) 
    {
      if(c[i]>c[j])
      {
        k=c[i];
        c[i]=c[j];
        c[j]=k;
      }
    }
  }
  printf("\n The merged array is:\n ");
  for(i=0;i<size;i++)
  {
    printf("%d\t",c[i]);
  }
  printf("\n");
}  
