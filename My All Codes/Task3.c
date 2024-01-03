#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i= 63; i<= 600; i++)
    {
    if(i%7==0 && i%9==0)
    {
    sum=sum+i;
    }
    }
    printf("%d",sum);
    return 0;






}

