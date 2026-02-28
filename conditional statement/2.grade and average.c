#include <stdio.h>
int main(){
    int mark;
    int totalmarks=0;
    for(int i=0;i<5;i++){
        scanf("%d",&mark);
        totalmarks+=mark;
    }
    float average=totalmarks/5;
    if(average>=90 && average<=100){
        printf("A");
    }
    else if(average>=80 && average<90){
        printf("B");
    }
    else if(average>=70 && average<80){
        printf("C");
    }
    else if(average>=60 && average<70){
        printf("D");
    }
    else if(average>=50 && average<60){
        printf("E");
    }
    else{
        printf("F");
    }
    printf("\n%.2f",average);
}