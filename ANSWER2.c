#include<stdio.h>
int small(int*,int);
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
    printf("smallest no. is %d",small(a,n));
    return 0;
}
int small(int b[],int n)
{
    int min=99999999,i;
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    return(min);

}