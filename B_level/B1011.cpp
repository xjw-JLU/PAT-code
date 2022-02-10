#include<iostream>
#include<stdio.h>

using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long  a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b>c)
            printf("Case #%d: true",i+1);
        else
            printf("Case #%d: false",i+1);
        if(i!=t-1)
            printf("\n");

    }

    return 0;
}
