#include<stdio.h>

int main(void){
    int i, j, n, sum = 3, multiple = 1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        multiple *= 2;
        sum += multiple;
    }
    printf("%d",sum*sum);
}