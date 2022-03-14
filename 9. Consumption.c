#include <stdio.h>

int main(){
    int distanceTraveled; double spentFuel;

    scanf("%d", &distanceTraveled);
    scanf("%lf", &spentFuel);

    printf("%0.3lf km/l", distanceTraveled / spentFuel);

    return 0;

}