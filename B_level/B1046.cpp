#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){

    int n;
    scanf("%d",&n);
    int p1=0;
    int p2=0;
    for(int i=0;i<n;i++){
        int a1,a2,b1,b2;
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
        int tmp=a1+b1;
        if(a2==tmp&&b2!=tmp)
            p2++;

        if(a2!=tmp&&b2==tmp)
            p1++;
    }

    printf("%d %d",p1,p2);
    return 0;
}
