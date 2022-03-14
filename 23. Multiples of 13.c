#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int sum = 0;
    for(int i = x; i <= y; i++){
       if(i % 13 != 0){
           sum += i;
       }
    }

    printf("%d", sum);
    return 0;
}
