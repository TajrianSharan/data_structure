
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : \n");
    scanf("%d", &a);

    if (a%2==0 && a%5==0)
    {
        printf("Multiple 2 and 5 both" ,a);
    }
    else if (a%2==0)
    {
        printf("%d" ,a);
    }
    else if (a%5 ==0)
    {
        printf("%d" ,a);
    }

    else
        printf("Not a multiple we want");

    return 0;

}
