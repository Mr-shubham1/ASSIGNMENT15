#include<stdio.h>
void sort(int *,int);
void frqncies(int *,int);
int main()
{
  int n,i;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("enter %d numbers\n",n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,n);  
  frqncies(a,n);
  return 0;
}
  void sort(int c[],int n)
  {
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        int t;
        if(c[i]>c[j])
        {
          t=c[i];
          c[i]=c[j];
          c[j]=t;
        }
      }
    }
  }
void frqncies(int b[],int n)
{
   int i,j,count=1;
   for(i=0;i<n-1;i=j )
   {
    for(j=i+1;j<n;j++)
    {
        if(b[i]==b[j])
        count++;
        else
        break;
    }
    printf("frequency of %d is %d\n",b[i],count);
    count=1;
   }
}