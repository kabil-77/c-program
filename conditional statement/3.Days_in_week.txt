#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    switch(input){
        case 1:printf("Sunday-Holiday!");break;
        case 2:printf("Monday-Weekday!");break;
        case 3:printf("Tuesday-Weekday!");break;
        case 4:printf("Wednesday-Weekday!");break;
        case 5:printf("Thursday-Weekday!");break;
        case 6:printf("Friday-Weekday!");break;
        case 7:printf("Saturday-Weekday!");break;
        default:printf("Invalid input please enter again!");
    }
}