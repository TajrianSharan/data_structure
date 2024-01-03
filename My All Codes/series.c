
#include<stdio.h>
int main()
{
    int i,n,sum=0,count=0;
    float avg;

    for(i=1; i<=0; i++)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            sum=sum+n;
            count++;

        }

    }
     printf("Sum= %d\n",sum);
     avg=sum/count;

   printf("avg= %.1f",avg);
    return 0;
}
