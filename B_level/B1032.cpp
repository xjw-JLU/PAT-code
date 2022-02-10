#include<iostream>
#include<stdio.h>

using namespace std;
const int maxn=100021;
int tmp[maxn]={0};
int main(void){
    int n;
    scanf("%d",&n);
    int mmax=1;
    for(int i=0;i<n;i++){
        int t1,t2;
        scanf("%d %d",&t1,&t2);
        tmp[t1]+=t2;
        if(tmp[t1]>tmp[mmax])
            mmax=t1;
    }
    printf("%d %d",mmax,tmp[mmax]);

    return 0;
}

