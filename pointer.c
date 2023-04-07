#include<stdio.h>

int main(void){
    int num1, num2, box;
    printf("정수 num1과 num2를 입력해주세요:");
    scanf("%d %d",&num1,&num2);
    printf("num1=%d, num2=%d\n",num1,num2);
    box = num1;
    num1 = num2;
    num2 = box;
    printf("num1=%d, num2=%d",num1,num2);

    return 0;
}