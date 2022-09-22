#include<stdio.h>
void sort(int *,int);
void printuniq(int *,int);
int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    printuniq(a,n);
    return 0;
}
   void sort(int b[],int n)
   {
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
   }
   void printuniq(int x[],int n)
   {
    int i,j;
    for(i=0;i<n-1;i=j)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            continue;
            else
            break;
        }
        printf("%d ",x[i]);
    }
   }