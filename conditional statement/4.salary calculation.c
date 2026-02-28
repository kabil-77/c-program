#include <stdio.h>
int main(){
    char gender;
    int hour;
    scanf("%c",&gender);
    scanf("%d",&hour);
    int extrahour=hour-8;
    float salary=0;
    if(gender=='M' || gender=='m'){
        if(hour>8){
            salary=(8*80)+(extrahour*100);
        }
        else{
            salary=hour*80;
        }
        printf("%.2f$",salary);
    }
    else if(gender=='F' || gender=='f'){
        if(hour>8){
            salary=(8*60)+(extrahour*100);
        }
        else{
            salary=hour*60;
        }
        printf("%.2f$",salary);
    }
    else{
        printf("invalid gender type!");
    }
}