#include <stdio.h>




int main(){
    int n1, n2, n3;
    int copyN1, copyN2, copyN3;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    copyN1 = n1;
    copyN2 = n2;
    copyN3 = n3;

    if(n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n2 > n3){
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if(n1 > n3){
        int temp = n1;
        n1 = n3;
        n3 = n1;
    }
    if(n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }


    printf("%d\n%d\n%d\n", n1, n2, n3);
    printf("%d\n%d\n%d\n", copyN1, copyN2, copyN3);

    return 0;

}

