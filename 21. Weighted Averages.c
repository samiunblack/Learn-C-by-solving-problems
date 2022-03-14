#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N * 3; i++){
        double x, y, z, average;
        double sum = 0.0;

        scanf("%lf", &x);
        scanf("%lf", &y);
        scanf("%lf", &z);

        sum += (x * 2) + (y * 3) + (z * 5);
        average = sum / 10; // dividing by 10 cause 5 + 3 + 2 = 10 
        printf("%0.1lf\n", average);
    }

    return 0;
}