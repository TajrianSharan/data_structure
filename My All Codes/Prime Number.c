#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);


    if(1%n==0 && n%n==0)
        printf("Prime number");
    else
        printf("Not prime");
    return 0;
}
