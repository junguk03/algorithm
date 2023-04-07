#include<stdio.h>

int main(void){
    int a;
    const double SQMETER_PER_PYEONG=3.3058;
    printf("평을 입력하세요:");
    scanf("%d",&a);
    printf("%f평방미터입니다",a*SQMETER_PER_PYEONG);
}