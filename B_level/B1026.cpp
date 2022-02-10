#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){

    long long c1,c2;
    scanf("%lld %lld",&c1,&c2);
    long long c12=c2-c1;
    if(c12%100>=50){
        c12+=100;
    }
    c12/=100;
    long long  hh=c12/3600;
    c12=c12-hh*3600;
    long long  mm=c12/60;
    c12=c12-mm*60;
    long long  ss=c12;

    //printf("%lld:%lld:%lld",hh,mm,ss);

    if(hh<10)
        printf("%d%lld:",0,hh);
    else
        printf("%lld:",hh);
    if(mm<10)
        printf("%d%lld:",0,mm);
    else
        printf("%lld:",mm);
    if(ss<10)
        printf("%d%lld",0,ss);
    else
        printf("%lld",ss);
    return 0;
}
