#include<stdio.h>

#define MAX_SIZE 15
#define NUM_WORDS 5
char a[NUM_WORDS][MAX_SIZE];
int main(void){
    int i, j;
    for(i=0;i<NUM_WORDS;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<MAX_SIZE;i++){
        for(j=0;j<NUM_WORDS;j++){
            if(a[j][i] == '\0'){
                continue;
            }
            else{
                printf("%c",a[j][i]);
            }
        }
    }
}