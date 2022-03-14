#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    int year = age / 365;
    int month = (age % 365) / 30;
    int day = (age % 365) % 30;

    printf("%d ano(s) %d mes(es) %d dia(s)", year, month, day);

    return 0;
}