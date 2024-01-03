#include<stdio.h>
int main()
{
    int i,n,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("Enter number : ");
        scanf("%d",&n);
        sum=sum+i;
        printf("Output=%d\n",sum);
    }
    return 0;
}
