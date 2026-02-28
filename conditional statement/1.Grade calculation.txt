#include <stdio.h>
int main(){
    int mark;
    int totalmarks=0;
    for(int i=0;i<6;i++){
        scanf("%d",&mark);
        totalmarks+=mark;
    }
    int average=totalmarks/6;
    if(average>=95 && average<=100){
        printf("A");
    }
    else if(average>=85 && average<95){
        printf("B");
    }
    else if(average>=75 && average<85){
        printf("C");
    }
    else if(average>=65 && average<75){
        printf("D");
    }
    else if(average>=45 && average<65){
        printf("E");
    }
    else{
        printf("F");
    }
}