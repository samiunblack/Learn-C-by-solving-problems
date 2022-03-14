#include <stdio.h>
#include <string.h>

int main(){
    char firstLevel[20], secondLevel[20], thirdLevel[20];

    scanf("%s", firstLevel);
    scanf("%s", secondLevel);
    scanf("%s", thirdLevel);

    //we are using strcmp for comparing two strings.
    if (strcmp(firstLevel, "vertebrado") == 0){
        
        if(strcmp(secondLevel, "ave") == 0){
            
            if(strcmp(thirdLevel, "carnivoro") == 0){
                printf("aguia");
            }
            
            else {
                printf("pomba");
            }
        }
        else {
            if(strcmp(thirdLevel,  "onivoro") == 0){
                printf("homem");
            }
            else {
                printf("vaca");
            }
        }
    }
    else {
        if(strcmp(secondLevel, "inseto") == 0){
            if(strcmp(thirdLevel, "hematofago") == 0){
                printf("pulga");
            }
            else{
                printf("lagarta");
            }
        }
        else {
            if(strcmp(thirdLevel, "hematofago") == 0){
                printf("sanguessuga");
            }
            else{
                printf("minhoca");
            }
        }
    }

    return 0;

}