#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("NULL\n");
            continue;
        }
        else if(n % 2 == 0){
            printf("EVEN ");
        }
        else{
            printf("ODD ");
        }

        if(n > 0){
            printf("POSITIVE");
        }
        else{
            printf("NEGATIVE");
        }
        printf("\n");
    }

    return 0;
}