#include<iostream>
#include<stdio.h>
using namespace std;

int coefficient[5100];//系数
int exponent[5100];//指数

int coefficient2[5100];//系数
int exponent2[5100];//指数
int main(void){



    int n=0;
    while(scanf("%d %d",&coefficient[n],&exponent[n])!=EOF){
        n++;
    }
    if(exponent[0]==0){
        printf("0 0");
    }
    else{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(exponent[i]==0){
                continue;
            }
            coefficient[cnt]=coefficient[i]*exponent[i];
            exponent[cnt]--;
            cnt++;
        }
        for(int j=0;j<cnt;j++){
            printf("%d %d",coefficient[j],exponent[j]);
            if(j!=cnt-1)
                printf(" ");
        }

    }

    return 0;
}
