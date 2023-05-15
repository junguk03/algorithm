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
    int n, i, j, num[100000];
    int box[100000];
    int sum = 0;
    int naturalNumber = 1;
    char result[1000000];
    int check = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        if(i == 0 || num[i] > num[i - 1]){
            while(naturalNumber <= num[i]){
                push(naturalNumber);
                box[sum] = naturalNumber;
                result[check++] = '+';
                naturalNumber++;
                sum++;
            }
            pop();
            result[check++] = '-';
            sum--;
        }
        else if(i > 0 && num[i] == box[sum-1]){
            pop();
            sum--;
            result[check++] = '-';
        }
        else{
            printf("NO");
            check = 0;
            break;
        }
    }
    for(i=0;i<check;i++){
        printf("%c\n",result[i]);
    }
}