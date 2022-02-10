#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){

    int m;
    char c;
    scanf("%d %c",&m,&c);

    int cnt=1;
    while(1){
        int before=2*cnt*cnt-1;
        int after=2*(cnt+1)*(cnt+1)-1;
        if(m>=before&&m<=after)
            break;
        else
            cnt++;
    }
    for(int i=0;i<cnt;i++){
        for(int j=0;j<i;j++)
            printf(" ");
        for(int j=0;j<(2*cnt-1)-2*i;j++)
            printf("%c",c);
        //for(int j=0;j<i;j++)
            //printf(" ");
        printf("\n");
    }
    for(int i=cnt-2;i>=0;i--){
        for(int j=0;j<i;j++)
            printf(" ");
        for(int j=0;j<(2*cnt-1)-2*i;j++)
            printf("%c",c);
        //for(int j=0;j<i;j++)
            //printf(" ");
        printf("\n");
    }

    printf("%d",m-(2*cnt*cnt-1));
}
