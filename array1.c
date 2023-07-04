#include<stdio.h>
void main()
{
 int a[20],i,n,x,y;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter array element");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter number to find");
 scanf("%d",&x);
 printf("enter number to replace");
 scanf("%d",&y);
 for(i=0;i<n;i++)
 {
  if(a[i]==x)
  {
   a[i]=y;
  }
 }
 printf("\nreplace array=");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}     
