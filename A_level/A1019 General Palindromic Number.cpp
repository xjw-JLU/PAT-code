#include<stdio.h>
#include<iostream>
using namespace std;

int xjw[100000];
int main(void){

    int n,b;
    scanf("%d %d",&n,&b);
    int cnt=0;
    while(n!=0){
        xjw[cnt]=n%b;
        n/=b;
        cnt++;
    }
    int xstart=0;
    int xend=cnt-1;
    int pd=0;
    while(xstart<xend){
        if(xjw[xstart]!=xjw[xend]){
            pd=1;
            break;
        }
        xstart++;
        xend--;
    }
    if(pd==0)
        printf("Yes\n");
    else
        printf("No\n");
    if(cnt==0){
        printf("0");
        return 0;
    }
    for(int i=cnt-1;i>=0;i--){
        printf("%d",xjw[i]);
        if(i!=0)
            printf(" ");
    }

    return 0;
}
