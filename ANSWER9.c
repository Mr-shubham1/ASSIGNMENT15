#include<stdio.h>
void merge(int *,int *,int);
void sort(int *,int);
int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter %d number\n",n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter %d number\n",n);
     for(i=0;i<n;i++)
     scanf("%d",&b[i]);
     merge(a,b,n);
    
     return 0;
}
void merge(int x[],int y[],int n)
{
    int c[n+n],i,j;
    for(i=0;i<n;i++)
    c[i]=x[i];
    for(i=n;i<2*n;i++)
    {
     c[i]=y[i-n];
    }
    sort(c,2*n);
}
void sort(int d[],int m)
{
    int i,j,t;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        if(d[i]<d[j])
        {
            t=d[i];
            d[i]=d[j];
            d[j]=t;
        }
    }
    for(i=0;i<m;i++)
    printf("%d ",d[i]);
}