#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

    char n[200];
    scanf("%s",n);
    int index=0;
    int sum=0;
    while(n[index]!='\0'){
        sum+=n[index]-'0';
        index++;
    }

    int Nsum[100];
    int cnt=0;
    do{
        Nsum[cnt]=sum%10;
        cnt++;
        sum/=10;
    }while(sum!=0);
    for(int i=cnt-1;i>=0;i--){
        if(Nsum[i]==0)
            printf("zero");
        else if(Nsum[i]==1)
            printf("one");
        else if(Nsum[i]==2)
            printf("two");
        else if(Nsum[i]==3)
            printf("three");
        else if(Nsum[i]==4)
            printf("four");
        else if(Nsum[i]==5)
            printf("five");
        else if(Nsum[i]==6)
            printf("six");
        else if(Nsum[i]==7)
            printf("seven");
        else if(Nsum[i]==8)
            printf("eight");
        else if(Nsum[i]==9)
            printf("nine");
        if(i!=0)
            printf(" ");
    }

    return 0;
}
