#include<stdio.h>

int main(){
    int year;
    printf("enter a year\n");
    scanf("%d", &year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0) {
                printf("leap year");
       }
            else{
                printf("not leap year");
            }
        }
        else{
        printf("year is lipapoti");

        }

    }
    else{
        printf("year is not lipapoti");
    }
    return 0;
} 