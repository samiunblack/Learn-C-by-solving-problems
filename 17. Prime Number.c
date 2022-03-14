#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int n, j, flag = 0;

        scanf("%d", &n);

        // if n is 0 or 1 then it's not prime
        if(n <= 1){
            flag = 1;
        }
 
        //if n is a factor of n / 2
        for(j = 2; j <= n / 2; j++){
            if(n % j == 0){
                flag = 1;
                break;
            }
        }

        //if flag is 0 then it's prime otherwise not
        if(flag == 0){
            printf("%d eh primo\n", n);
        }
        else {
            printf("%d nao eh primo\n", n);
        }

    }
}