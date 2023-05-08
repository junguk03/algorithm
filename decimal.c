#include<stdio.h>

int main(void){
    int n, i, j, num[100], sum = 0, count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        for(j=2;j<num[i];j++){
            if(num[i]%j == 0) break;
            else sum++;
        }
        if(sum == num[i] - 2) count++;
        sum = 0;
    }
    printf("%d",count);
}