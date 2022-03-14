#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    //we are printing i until i is equal to y and when ever i is divisible by x
    //we are printing a new line.
    for(int i = 1; i <= y; i++){
        printf("%d ", i);
        if (i % x == 0){
            printf("\n");
        }
    }
    return 0;
}