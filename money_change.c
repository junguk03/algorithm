#include<stdio.h>

int main(void){
    int t, i, j, money, num[4];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&money);
        num[0] = money/25;
        money %= 25;
        num[1] = money/10;
        money %= 10;
        num[2] = money/5;
        money %= 5;
        num[3] = money;
    for(j=0;j<4;j++){
        printf("%d ",num[j]);
    }
    printf("\n");
    }
    return 0;
}