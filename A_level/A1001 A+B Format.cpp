#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

    int a,b;
    int tmp[200];
    int cnt=0;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    if(sum<0){
        printf("-");
        sum*=-1;
    }
    do{
        tmp[cnt]=sum%10;
        cnt++;
        sum/=10;

    }while(sum!=0);
    for(int i=cnt-1;i>=0;i--){
        printf("%d",tmp[i]);
        if(i%3==0&&i!=0)
            printf(",");
    }

    return 0;
}
