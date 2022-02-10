#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        long long he=a+b;
        int pd;
        if(a>0&&b>0&&he<0)
            pd=1;
        else if(a<0&&b<0&&he>0)
            pd=0;
        else{
            if(he>c)
                pd=1;
            else
                pd=0;
        }

        if(pd==1)
            printf("Case #%d: true",i+1);
        else if(pd==0)
            printf("Case #%d: false",i+1);
        if(i!=t-1)
            printf("\n");
    }


    return 0;
}
