#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum,product,difference;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    sum = a+b;
    product = a*b;
    difference = a-b;
    printf("%d\n%d\n%d" ,sum,product,difference);

    return 0;
}
