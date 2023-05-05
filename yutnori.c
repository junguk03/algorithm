#include<stdio.h>

int main(void){
    int a[4] = {0, }, i, one = 0, j;
    for(j=0;j<3;j++){
        for(i=0;i<4;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<4;i++){
            if(a[i] == 1) one++;
            else continue;
        }
        if(one == 0) printf("D");
        else if(one == 1) printf("C");
        else if(one == 2) printf("B");
        else if(one == 3) printf("A");
        else printf("E");
        printf("\n");
        one = 0;
    }
}