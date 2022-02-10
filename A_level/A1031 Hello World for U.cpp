#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(void){
    char chart[100];
    scanf("%s",chart);

    int len=strlen(chart);
    int n1,n2,n3;
    int tmp=(len/3)+1;
    for(int i=tmp;i>0;i--){
        n1=n3=i;
        n2=len+2-n1-n3;
        if(n1<=n2)
            break;
    }
    //printf("%d %d\n",n1,n2);
    for(int i=0;i<n1-1;i++){
        printf("%c",chart[i]);
        for(int j=0;j<n2-2;j++)
            printf(" ");
        printf("%c\n",chart[len-1-i]);
    }

    for(int j=n1-1;j<n1-1+n2;j++)
        printf("%c",chart[j]);

    return 0;
}
