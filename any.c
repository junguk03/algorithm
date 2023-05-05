#include<stdio.h>

int main(void){
    char a[100] = {0, };
    int n, t = 0;
    int b, i, d = 0, max = 99;
    int sum = 0;
    scanf("%d %d",&n,&b);
    t = b;
    for(i=0;i<100;i++){
        if(n/b<t){
            a[max] = n&b;
            break;
        }
        a[max] = n%b;
        n = n/b;
        max--;
    }
    for(i=0;i<=99-max;i++){
        a[i] = a[max+i];
    }
    for(i=0;i<=99-max;i++){
        if(a[i]>=0&&a[i]<10)
            a[i] += 48;
        else
            a[i] += 55;
    }
    for(i=0;i<=99-max;i++){
        printf("%c",a[i]);
    }
}