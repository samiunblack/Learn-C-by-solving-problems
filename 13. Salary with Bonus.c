#include <stdio.h>

int main(){
    char name[40];

    double salary, sale;

    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sale);

    double total_salary = salary + ((sale * 15)/100);
    printf("TOTAL = R$ %0.2lf", total_salary);

    return 0;
}