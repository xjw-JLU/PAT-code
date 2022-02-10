#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
    char cNum[300];
    scanf("%s",cNum);

    int index=0;
    int acc=0;
    while(cNum[index]!='\0'){
        int t1=cNum[index]-48;
        acc+=t1;
        index++;
    }
    int cnt=0;
    int accNum[10000];
    do{
        accNum[cnt]=acc%10;
        acc/=10;
        cnt++;
    }while(acc!=0);

    for(int i=cnt-1;i>=0;i--){
        if(accNum[i]==0)
            printf("ling");
        else if(accNum[i]==1)
            printf("yi");
        else if(accNum[i]==2)
            printf("er");
        else if(accNum[i]==3)
            printf("san");
        else if(accNum[i]==4)
            printf("si");
        else if(accNum[i]==5)
            printf("wu");
        else if(accNum[i]==6)
            printf("liu");
        else if(accNum[i]==7)
            printf("qi");
        else if(accNum[i]==8)
            printf("ba");
        else if(accNum[i]==9)
            printf("jiu");

        if(i!=0)
            printf(" ");
    }
    return 0;
}
