#include <stdio.h>
int main(){
    float basic_salary,HRA,DA,total_salary;
    scanf("%f",&basic_salary);
    if(basic_salary<=70000){
        HRA=basic_salary*0.30;
        DA=basic_salary*0.80;
        total_salary=basic_salary+HRA+DA;
    }
    else{
        total_salary=basic_salary;
    }
    printf("%.2f$",total_salary);
}