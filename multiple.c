#include<stdio.h>

int main(void){
    int num1, num2, i;
    while(1){
        scanf("%d %d",&num1,&num2);
        if(num1 < num2){
            if(num2%num1 == 0) printf("factor\n");
            else printf("neither\n");
        }
        else if(num1 > num2){
            if(num1%num2 == 0) printf("multiple\n");
            else printf("neither\n");
        }
        else break;
    }
}