#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int array[5];//array declaration
    for(i=0;i<5;i++){
        array[i]= rand() %100;//random 2 digits value taking
    }
    for(i=0;i<5;i++)//forward printing
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t", array[5-1-i]);
    }







}
