#include <stdio.h>
#include <string.h>

int main(){
    int T;
    char num[5];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%s", num);

        int sum = num[0] - '0' + num[strlen(num) - 1] - '0';

        printf("Sum = %d\n", sum);
    }

    return 0;
}