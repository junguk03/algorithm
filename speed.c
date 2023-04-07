#include<stdio.h>

int main(void){
    float a, b;
    printf("빛의 속도는 ");
    scanf("%f",&a);
    printf("km/s\n");
    printf("빛의 속도는 ");
    scanf("%f",&b);
    printf("km\n");
    printf("도달시간은 %f초 ",b/a);
}