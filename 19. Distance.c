#include <stdio.h>

int main(){
    const double carYspeed = 0.5; //car Y can get 0.5 km ahead of car X in one min

    int km;
    scanf("%d", &km);
    
    int minutes = (int) km /carYspeed;
    printf("%d minutos", minutes);

    return 0;
}