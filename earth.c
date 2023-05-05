#include<stdio.h>

int main(void){
    double weight_earth, weight_moon;
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf",&weight_earth);
    weight_moon = weight_earth*0.17;
    printf("달에서의 몸무게는 %.2lfkg입니다.",weight_moon);
}