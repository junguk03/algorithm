#include<stdio.h>

int main(void){
    int sum = 0;
    int sequence[500001] = {0};
    scanf("%d",sequence);
    for(int i = 0;i<500000;i++){
        while(sequence[i] != 0){
            sum++;
        }
    }
    printf("%d",sum);
}