#include<stdio.h>
#include<iostream>
using namespace std;
#define max2 3000
double coefficient[max2];//系数
int exponent[max2];//指数

double coefficient2[max2];//系数
int exponent2[max2];//指数

double coefficient3[max2];//系数
int exponent3[max2];//指数

double coefficient4[max2];//系数
int exponent4[max2];//指数
int main(void){

    int k1;
    scanf("%d",&k1);
    for(int i=0;i<k1;i++){
        scanf("%d %lf",&exponent[i],&coefficient[i]);
    }
    int k2;
    scanf("%d",&k2);
    for(int i=0;i<k2;i++){
        scanf("%d %lf",&exponent2[i],&coefficient2[i]);
    }
    int maxx=exponent[0]+exponent2[0];
    for(int i=0;i<=maxx;i++){
        coefficient3[i]=0.0;
    }
    int cnt2=0;
    for(int i=0;i<k1;i++){
        for(int j=0;j<k2;j++){
            int tmp1=exponent[i]+exponent2[j];
            coefficient3[tmp1]+=(coefficient[i]*coefficient2[j]);
        }
    }
    int cnt=0;
    for(int i=(exponent[0]+exponent2[0]);i>=0;i--){
        if(coefficient3[i]!=0.0){
            exponent4[cnt]=i;
            coefficient4[cnt]=coefficient3[i];
            cnt++;
        }
    }

    printf("%d",cnt);
    for(int i=0;i<cnt;i++){
        printf(" %d %.1f",exponent4[i],coefficient4[i]);
    }
    return 0;
}
