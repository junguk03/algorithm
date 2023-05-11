#include<stdio.h>

int stack[100001];
int count = 0;

void push(int num){
    stack[count] = num;
    count++;
}

void pop(){
    count--;
    stack[count] = 0;
}

int main(void){
    int i, k, num, sum = 0;
    scanf("%d\n",&k);
    for(i=0;i<k;i++){
        scanf("%d",&num);
        if(num != 0){
            push(num);
        }
        else if(num == 0){
            pop();
        }
    }
    for(i=0;i<count;i++){
        sum += stack[i];
    }
    printf("%d",sum);
}