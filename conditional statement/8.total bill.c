#include <stdio.h>
int main(){
    int pen;
    int notebook;
    int pencil;
    scanf("%d %d %d",&pen,&notebook,&pencil);
    float bill=(pen*20)+(notebook*70)+(pencil*9);
    printf("%.2f$",bill);
}