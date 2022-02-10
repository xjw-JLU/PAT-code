#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int tchange1[10000];
int tchange2[10000];
int madd[1000000]={0};
int main(void){

    long long A,B;
    int D;
    scanf("%lld %lld %d",&A,&B,&D);
    memset(madd,0,sizeof(madd));

    long long cnt1=0;
    while(A!=0){
        tchange1[cnt1]=A%D;
        A=A/D;
        cnt1++;
    }
    long long cnt2=0;
    while(B!=0){
        tchange2[cnt2]=B%D;
        B=B/D;
        cnt2++;
    }
    int t1=0;
    int t2=0;
    int cntt=0;
    while(t1!=cnt1&&t2!=cnt2){
        int tmp=tchange1[t1]+tchange2[t2];
        madd[cntt]+=tmp;
        while(madd[cntt]>=D){
            madd[cntt]-=D;
            madd[cntt+1]++;
        }
        cntt++;
        t1++;
        t2++;
    }
    while(t1!=cnt1){
        madd[cntt]+=tchange1[t1];
        while(madd[cntt]>=D){
            madd[cntt]-=D;
            madd[cntt+1]+=1;
        }
        t1++;
        cntt++;
    }
    while(t2!=cnt2){
        madd[cntt]+=tchange2[t2];
        while(madd[cntt]>=D){
            madd[cntt]-=D;
            madd[cntt+1]+=1;
        }
        t2++;
        cntt++;
    }
    if(madd[cntt]!=0)
        printf("%d",madd[cntt]);
    for(int i=cntt-1;i>=0;i--)
        printf("%d",madd[i]);
    return 0;
}
