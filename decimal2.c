#include<stdio.h>

int main(void){
    int m, n, i, j, min = 10000, sum = 0, count = 0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        count = 0;
        for(j=2;j<i;j++){
            if(i%j != 0) count++;
            else break;
        }
        if(count == i - 2){
            sum += i;
            if(i < min) min = i;
        }
        else continue;
    }
    if(sum == 0) printf("-1");
    else printf("%d\n%d",sum,min);
}