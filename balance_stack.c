#include<stdio.h>
#include<string.h>

int count = 0;
char stack[200];

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
    char input[201];
    int sum = 0;
    while(1){
        resetCount();
        int first = 0;
        int second = 0;
        fgets(input, sizeof(input), stdin); 
        if(input[0] == '.') break;
        sum = strlen(input);
        if (input[sum - 1] == '\n') {
            input[sum - 1] = '\0';
            sum--;
        }
        for(j=sum - 1;j>=0;j--){
            push(input[j]);
        }
        while(first >= 0 && second >= 0){
            int ch = pop();
            if(ch == ')') first--;
            else if(ch == '(') first++;
            else if(ch == '.') break;
            else continue;

            if(ch == ']') second--;  // ([)] 이건 no가 나와야하는데 그건 고려를 못함 
            else if(ch == '[') second++;
            else continue;
        }
        if(first == 0 && second == 0) printf("yes\n");
        else printf("no\n");
    }
}