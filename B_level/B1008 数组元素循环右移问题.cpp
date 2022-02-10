#include<iostream>
#include<stdio.h>

using namespace std;
int maxn=110;
int main(void){

    int n,m;
    long long a[maxn];
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

    m=m%n;
    for(int i=0;i<n;i++){
        printf("%lld",a[(i+n-m)%n]);
        if(i!=n-1)
            printf(" ");
    }
    return 0;
}
