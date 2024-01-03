
#include <stdio.h>
int main() {
    int x;
    printf("Please input an integer ");
    scanf("%d", &x);
    if (x%2 == 0 && x%5 == 0){
        printf("No\n");
    }
    else{
        printf("%d", x);
    }
    return 0;
}
