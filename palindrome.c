#include<stdio.h>
#include<string.h>

int main(void){
    char a[100];
    int x, y;
    scanf("%s",a);
    x = 0;
    y = strlen(a)-1;
    while(x < y){
        if(a[x] == a[y]){
            x++;
            y--;
        }
        else{
           printf("0");
           return 0;
        }
    }
    printf("1");
}