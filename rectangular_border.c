#include<stdio.h>

int main(void){
    int x, y, w, h;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    int min = 0;
    if(w - x <= h - y){
        min = w - x;
    }
    else if(h - y <= w - x){
        min = h - y;
    }
    else if(x <= y){
        min = x;
    }
    else if(y <= x){
        min = y;
    }
    printf("%d",min);
}