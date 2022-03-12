#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    int num;
    
    for(int i = 1; i <= T; i++){
        scanf("%d", &num);
        printf("Case %d: ", i);
        
        for(int j = 1; j <= num; j++){
            if (num % j == 0){
                printf(" %d ", j);
            }    
        }
        printf("\n");
    }

    return 0;
}