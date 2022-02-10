#include<stdio.h>
#include<iostream>
using namespace std;

double coefficient[2000];//系数
int exponent[2000];//指数

double coefficient2[2000];//系数
int exponent2[2000];//指数

double coefficient3[2000];//系数
int exponent3[2000];//指数
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
    int index1=0;
    int index2=0;
    int cnt=0;
    while(index1<k1&&index2<k2){
        if(exponent[index1]==exponent2[index2]){
            double tmp=coefficient[index1]+coefficient2[index2];
            if(tmp!=0){
                exponent3[cnt]=exponent2[index2];
                coefficient3[cnt]=tmp;
                cnt++;
            }
            index1++;
            index2++;
        }else if(exponent[index1]>exponent2[index2]){
            exponent3[cnt]=exponent[index1];
            coefficient3[cnt]=coefficient[index1];
            index1++;
            cnt++;
        }else{
            exponent3[cnt]=exponent2[index2];
            coefficient3[cnt]=coefficient2[index2];
            index2++;
            cnt++;
        }
    }
    while(index1<k1){
        exponent3[cnt]=exponent[index1];
        coefficient3[cnt]=coefficient[index1];
        index1++;
        cnt++;
    }
    while(index2<k2){
        exponent3[cnt]=exponent2[index2];
        coefficient3[cnt]=coefficient2[index2];
        index2++;
        cnt++;
    }
    printf("%d",cnt);
    for(int i=0;i<cnt;i++){
        printf(" %d %.1f",exponent3[i],coefficient3[i]);
    }
    return 0;
}
