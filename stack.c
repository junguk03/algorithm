#include<stdio.h>
#include<string.h>

int stack[100001];
static int count = 0;

void push(int num){
    stack[count] = num;
    count++;
}
void pop(){
    if(count != 0){
        count--;
        printf("%d\n",stack[count]);
        stack[count] = 0;
    }
    else printf("스택이 비어있음\n");
}
void size(){
    printf("%d\n",count);
}
void empty(){
    if(count == 0) printf("스택이 비어있음\n");
    else printf("스택이 비어있지 않음\n");
}
void top(){
    if(count != 0){
        printf("%d\n",stack[count - 1]);
    }
    else printf("스택이 비어있음\n");
}

int main(void){
    int InputSize;
    char function[10];
    scanf("%d",&InputSize);
    int stack[100];
    for(int i=0;i<InputSize;i++){
        scanf("%s",function);
        if(strcmp(function,"push") == 0){
            int num;
            scanf("%d",&num);
            push(num);
        }
        else if(strcmp(function,"pop") == 0) pop();
        else if(strcmp(function,"size") == 0) size();
        else if(strcmp(function,"empty") == 0) empty();
        else if(strcmp(function,"top") == 0) top();
    }
}
