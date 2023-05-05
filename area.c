#include<stdio.h>

int main(void){
    int num, i, j, max = 0, min = 200;
    int width = 0, length = 0, area = 0;
    scanf("%d",&num);
    int a[num][2];
    for(i=0;i<num;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<num;j++){
            if(a[j][i] < min){
                min = a[j][i];
            }
        }
        for(j=0;j<num;j++){
            if(a[j][i]<min+10 && a[j][i] > max){
                max = a[j][i];
            }
        }
        if(i == 0){
            width = min + 10 - max;
        }
        else length = min + 10 - max;
    }
    area = 300-(width*length);
    printf("%d",area);
}