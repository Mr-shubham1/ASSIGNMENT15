#include<stdio.h>
void frstadjsnt(int *,int);
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
    frstadjsnt(a,n);
    return 0;
}
void frstadjsnt(int x[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(x[i]==x[i+1])
        {
        printf("first adjsent number is %d",x[i]);
        break;
        }
    }
    if(i==(n-1))
    printf("there is no adjsent duplicate number");
}