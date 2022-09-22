#include<stdio.h>
void sort(int *,int);
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    return 0;
}
void sort(int x[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",x[i]);
}