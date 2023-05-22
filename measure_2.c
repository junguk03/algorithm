#include<stdio.h>

int main(void){
    int n, i, sum = 0, j = 0, length, k;
    while(1){
        sum = 0;
        j = 0;
        int fix[100000] = {0, };
        scanf("%d",&n);
        if(n == -1) break;
        for(i=1;i<n;i++){
            if(n%i == 0){
                fix[j++] = i;
                sum += i;
            }
        }
        if(sum == n){
            printf("%d = 1",n);
            for(i=1;i<j;i++){
                printf(" + %d",fix[i]);
           }
           printf("\n");
        }
        else printf("%d is NOT perfect.\n",n);
    }
}