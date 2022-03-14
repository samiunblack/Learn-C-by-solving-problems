#include <stdio.h>

int find_factorial(int n);

int main(){
    int N;

    scanf("%d", &N);
    printf("%d", find_factorial(N));

    return 0;
}

int find_factorial(int n){
    if (n == 1){
        return 1;
    }

    return n * find_factorial(n - 1);
}