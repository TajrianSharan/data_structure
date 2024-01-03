#include<stdio.h>
#include<unistd.h>

int main()
{
    for(int i=0; i<1; i++)
    {
        printf("Loading");
    }

    for(int i=0; i<=5; i++)
    {
        printf(" . ");
        usleep(1000000);
    }
    return 0;
}
