#include<stdio.h>
int main()
{
    int row, col,n;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {


            if(row==1 ||row==n || col==1||col==n)
                printf("*");


            else if(row==5 && col==5)
                printf("H");


            else


            printf(" ");
        }


        printf("\n");
    }
    return 0;
}
