#include<stdio.h>

int main ()
{
    int t ,len,last_number, i;
    char last_character,num[101];
    scanf("%d",&t);
    for( i=1; i<=t; i++){
        scanf("%s",&num);
        len=strlen(num);
        last_character=num[len-1];
        last_number=last_character-'0';
        if(last_number%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}