#include<stdio.h>
#include<string.h>

int count = 0;
char stack[50];

void push(char num){
    stack[count++] = num;
}

char pop(){
    return stack[--count];
}

void resetCount(){
    count = 0;
}

int main(void){
    int t, i, j;
    char input[51];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        resetCount();
        int plus = 0;
        scanf("%s",input);
        int sum = strlen(input);
        for(j=0;j<sum;j++){
            push(input[j]);
        }
        while(plus >= 0){
            int ch = pop();
            if(ch == ')') plus++;
            else if(ch == '(') plus--;
            else break;
        }
        if(plus == 0) printf("YES\n");
        else printf("NO\n");
    }
}
