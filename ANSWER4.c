#include<stdio.h>
void rotate(int *,int,int);
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
    int b;
    printf("enter no. of position to rotate\n");
    scanf("%d",&b);
    rotate(a,n,b);
    return 0;
}
void rotate(int x[],int n,int b)
{
  int i,j,t;
  for(i=1;i<=b;i++)
  {
    t=x[0]; 
    for(j=0;j<n-1;j++)
    {
        x[j]=x[j+1];
    }
    x[n-1]=t;
  }
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
}