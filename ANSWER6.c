#include<stdio.h>
void dsplrevof(int *,int);
int main()
{
  int n,i;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("enter %d number\n",n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  } 
  dsplrevof(a,n);
  return 0; 
}
void dsplrevof(int x[],int n)
{
    int i,t;
    for(i=0;i<n/2;i++)
    {
      t=x[i];
      x[i]=x[n-i-1];
      x[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d ",x[i]);
}