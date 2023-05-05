#include<stdio.h>

int main(void){
    int n, b, i=0, count = 0;
    char blank[101];
    scanf("%d %d",&n,&b);
    while(n/b != 0){
        blank[i] = n%b;
        n /= b;
        if(n<b && n!=0){
            blank[i+1] = n;
            count++;
        }
        i++;
        count++;
    }
    for(i=0;i<count;i++){
        if(blank[i]>=10 && blank[i]<=35){
            blank[i] += 55;
        }
        else{
            blank[i] += 48;
        }
    }
    for(i=0;i<count;i++){
        printf("%c",blank[i]);
    }
}