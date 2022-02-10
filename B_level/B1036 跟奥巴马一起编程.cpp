#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

    int n;
    char c;
    scanf("%d %c",&n,&c);

    for(int i=0;i<n;i++)
        printf("%c",c);
    printf("\n");
    int col=0;
    if(n%2==0)
        col=n/2;
    else
        col=(n+1)/2;

    for(int i=1;i<col-1;i++){
        printf("%c",c);
        for(int i=0;i<n-2;i++)
            printf(" ");
        printf("%c\n",c);
    }
    for(int i=0;i<n;i++)
        printf("%c",c);
    printf("\n");
    return 0;
}

