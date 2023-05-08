#include<stdio.h>

int main(void){
    int i, n;
    scanf("%d",&n);
    while(n != 1){
        for(i=2;i<=n;i++){
            if(n%i == 0){
                printf("%d\n",i);
                n /= i;
                break;
            }
            else continue;
        }
    }
}