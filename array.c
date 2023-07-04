//C program to accept n elements store these element in array and store the square of these number in another array and display both array.

#include<stdio.h>
void main()
{
 int i,n,a[20],b[20];
 printf("enter limit");
 scanf("%d",&n);
 printf("enter element");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  b[i]=a[i]*a[i];
 }
 printf("\nfirst array:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\nsecond square array:");
 for(i=0;i<n;i++)
 printf("%d ",b[i]);
}
