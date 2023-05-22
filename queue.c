#include<stdio.h>

int stack[100000];
int count = 0;

void push(int num){
    stack[count] = num;
    count++;
}

void pop(){
    stack[--count] = 0;
}

int main(void){
    
}