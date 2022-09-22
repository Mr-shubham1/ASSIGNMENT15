#include<stdio.h>
int nduplicate(int *,int);
void sort(int *,int);
int main()
{
    int n,i,z;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    z=nduplicate(a,n);
    printf("total no. of duplicate items is %d",z);
    return 0;
}
int nduplicate(int b[],int n)
{
    int i,j,count=1,d=0;
    for(i=0;i<n-1;i=j)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                count++;
                continue;
            }
            else 
            break;
        }
        if(count>=2)
        d++;
        count=1;
    }
    return d;
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
}