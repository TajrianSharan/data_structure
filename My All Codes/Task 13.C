
#include <stdio.h>
int main() {
int x;
printf("Please input a mark\n");
scanf("%d", &x);
if (x>= 0 && x<=100){
    if(x<50){
        printf("F\n");
    }
    else if(x>= 50 && x<=59) {
        printf("E\n");
    }
    else if(x>= 60 && x<= 69){
        printf("D\n");
    }
    else if(x>= 70 && x<=79){
        printf("C\n");
    }
    else if(x>= 80 && x<=89){
        printf("B\n");
    }
    else {
        printf("A");
    }
}
else {
    printf("Invalid");
}
    return 0;
}
