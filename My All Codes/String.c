/*#include<stdio.h>
int main()
{
    char sl[20];
    printf("Enter yout name :");
    gets(sl);
    printf("Full name = %s",sl);
    return 0;
}*/

#include<stdio.h>
int main()
{
    char s1[]="Tajrian";
    int i=0,len=0;
    while(s1[i]!='\0')
        {
            i++;
            len++;

        }
        printf("Length=%d\n",len);
}

