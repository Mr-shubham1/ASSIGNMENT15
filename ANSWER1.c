#include<stdio.h>
int large(int *,int);
int main()
{
   int n,i;
   printf("enter a number\n");
   scanf("%d",&n);
   printf("enter %d number",n); 
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("largest no. in array is %d",large(a,n));
   return 0;
}
int large(int b[],int n)
{
   int i,j;
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(b[i]>b[j])
         continue;
         else 
         break;
      }
      if(j==n)
      return(b[i]);
   }

}