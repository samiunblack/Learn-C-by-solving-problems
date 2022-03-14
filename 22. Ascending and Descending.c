#include <stdio.h>

int main(){
    int x, y;
    
    //we are returning if its ascending or descending until x == y
    while (1){
        scanf("%d", &x);
        scanf("%d", &y);

        if(x < y){
            printf("Crescente\n");
        }
        else if(x > y) {
            printf("Decrescente\n");
        }
        else {
            break;
        }
    }

    return 0;
}