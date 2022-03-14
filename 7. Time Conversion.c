#include <stdio.h>

int main(){
    int time;

    scanf("%d", &time);

    int hours = time / (60 * 60);
    int minutes = (time - (hours * 60 * 60)) / 60;
    int seconds = time - ((hours * 60 * 60) + (minutes * 60));

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}