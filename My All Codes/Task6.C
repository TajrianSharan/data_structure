
#include <stdio.h>
int main()
{
    int n, i,i2;
    int y,y1=0,y3=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        {

        if(i%2==0)
        {
           i2=-1*i*i;
           y1=y1+i2;

        }

        else if(i%2!=0)
        {
           y3=y3+i*i;
        }

    }

    y=y3+y1;
    printf("%d", y);

    return 0;
}
