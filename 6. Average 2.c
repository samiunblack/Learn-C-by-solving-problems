#include <stdio.h>

int main(){
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("MEDIA = %0.1lf", ((a * 2) + (b * 3) + (c * 5))/10.0);

    return 0;
}