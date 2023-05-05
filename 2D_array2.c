#include<stdio.h>

int main(void){
    int i, j, max = 0;
    int b = 0, c = 0;
    int a[9][9];
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(a[i][j]>max){
                max = a[i][j];
                b = i;
                c = j;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",b+1,c+1);
}