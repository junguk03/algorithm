#include<stdio.h>
#include<string.h>

int main(void){
    int n, i, sum = 0, j = 0, length;
    while(1){
        char fix[10000] = {0, };
        scanf("%d",&n);
        if(n == -1) break;
        for(i=1;i<n;i++){
            if(n%i == 0){
                fix[j] = i;
                j++;
                sum += i;
            }
        }
        length = strlen(fix);
        if(sum == n){
            printf("%d = %d",n,fix[0]);
            for(i=1;i<length;i++){
                printf(" + %d",fix[i]);
           }
           printf("\n");
        }
        else printf("%d is NOT perfect.\n",n);
        sum = 0;
        j = 0;
    }
}