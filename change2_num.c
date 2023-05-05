#include<stdio.h>

int main(void){
    int n, b, i, count = 0, id = 0;
    char blank[1001];
    scanf("%d %d",&n,&b);
    while(n > 0){
        blank[i] = n%b;
        n /= b;
        count++;
    }
    id = count - 1;
    for(i=id;i>=0;i--){
        if(blank[i]>=10){
            printf("%c",blank[i] + 55);
        }
        else{
            printf("%d",blank[i]);
        }
    }
}