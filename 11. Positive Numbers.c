#include <stdio.h>

int main(){
    int count = 0;\
    int i = 0;
    while(i < 6){
        double n;
        scanf("%lf", &n);

        if(n > 0){
            count += 1;
        }
        i++;
    }

    printf("%d valores positivos", count);
    return 0;
}