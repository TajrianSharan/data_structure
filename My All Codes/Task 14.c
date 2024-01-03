
#include <stdio.h>
#include <math.h>
int main() {
int x, t;
float X, T, V;
printf("Please velocity in meters and time in seconds\n");
scanf("%d %d", &x, &t);
X= x/1000.0;
T= t/3600.0;
V= X/T;
printf("%f km/h\n", V);
if (V<60){
    printf("Too slow. Needs more changes.\n");
}
else if (V>=60 && V<=90){
    printf("Velocity is okay. The car is ready!\n");
}

else {
    printf("Too fast. Only few changes should suffice");
}
    return 0;
}
