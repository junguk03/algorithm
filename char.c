#include<stdio.h>
#include<string.h>

int main(void){
    char a[100];
    printf("문자열을 입력하세요:");
    scanf("%s",a);
    int len = strlen(a);
    printf("\n\n입력된 문자열은\n\"%s\"\n입니다\n\n",a);
    printf("입력된 문자열의 길이=%d",len);
}