#include<stdio.h>
#include<iostream>

using namespace std;

long long toKnut(long long g,long long s,long long k);

int main(void){

    long long pg,ps,pk;
    long long ag,as,ak;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&pg,&ps,&pk,&ag,&as,&ak);

    long long pay=toKnut(pg,ps,pk);
    long long ace=toKnut(ag,as,ak);
    long long sub=ace+pay;
   // printf("%d %d %d\n",pay,ace,sub);


    long long rg,rs,rk;
    rg=rs=rk=0;
    rk=sub%29;
    long long tmp=sub/29;
    rs=tmp%17;
    rg=tmp/17;
    printf("%lld.%lld.%lld",rg,rs,rk);
    return 0;
}
long long toKnut(long long g,long long s,long long k){
    long long ret=(g*17+s)*29+k;
    return ret;
}
