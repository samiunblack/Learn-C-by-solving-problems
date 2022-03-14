#include <stdio.h>

int main(){
    int number, workHour; double earning;

    scanf("%d", &number);
    scanf("%d", &workHour);
    scanf("%lf", &earning);

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", number, workHour * earning);

    return 0;
}