#include <stdio.h>
int main(){
    int num_1;
    int num_2;
    char operation;
    printf("For Addition Press(+)\nFor Subtraction Press(-)\nFor Multiplication press(*)\nFor Division press(/)\n");
    scanf("%d %c %d",&num_1,&operation,&num_2);
    if(operation=='+'){
        printf("%d",num_1+num_2);
    }
    else if(operation=='-'){
        printf("%d",num_1-num_2);
    }
    else if(operation=='*'){
        printf("%d",num_1*num_2);
    }
    else if(operation=='/'){
        printf("%d",num_1/num_2);
    }
    else{
        printf("Invalid operator!");
    }
}