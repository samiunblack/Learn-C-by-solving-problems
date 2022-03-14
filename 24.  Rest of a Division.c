#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    //we are printing the value if the remainder is 2 or 3
    for(int i = x; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }

    return 0;
}