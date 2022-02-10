
#include<iostream>
#include<stdio.h>

using namespace std;
int main(void)
{
    long long  a,da,b,db;
    scanf("%lld %lld %lld %lld",&a,&da,&b,&db);
    long long  pa=0;
    int cna=1;
    while(a!=0){
        int tmp=a%10;
        if(tmp==da){
            pa+=da*cna;
            cna*=10;
        }
        a=a/10;
    }

    long long pb=0;
    int cnb=1;
    while(b!=0){
        int tmp=b%10;
        if(tmp==db){
            pb+=db*cnb;
            cnb*=10;
        }
        b=b/10;
    }

    printf("%d",pa+pb);
    return 0;
}
