#include<stdio.h>
int main()
{
    int i,n,a[100];
    int sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        if(a[i]%2==0)
    {
        sum=sum+a[i];
    }
    else
        {
        sum1=sum1+a[i];
    }
printf("odd: %d\n",sum1);
printf("even: %d\n",sum);
}
