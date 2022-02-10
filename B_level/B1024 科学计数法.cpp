#include<iostream>
#include<stdio.h>
using namespace std;
char Numm[200000];
char pNum[200000];
int main(void){
    scanf("%s",Numm);
    if(Numm[0]=='-')
        printf("-");
    int index=1;
    int cnt=0;
    pNum[cnt]=Numm[index];
    index=3;
    cnt++;
    while(Numm[index]!='E'){
        pNum[cnt]=Numm[index];
        cnt++;
        index++;
    }
    index++;
    if(Numm[index]=='-'){
        index++;
        int acc=0;
        while(Numm[index]!='\0'){
            acc=acc*10+(Numm[index]-48);
            index++;
        }
        for(int i=0;i<acc;i++){
            printf("0");
            if(i==0)
                printf(".");
        }
        for(int i=0;i<cnt;i++)
            printf("%c",pNum[i]);
    }
    else{
        index++;
        int acc=0;
        while(Numm[index]!='\0'){
            acc=acc*10+(Numm[index]-48);
            index++;
        }
        if(acc>=cnt-1){
            for(int i=0;i<cnt;i++)
                printf("%c",pNum[i]);
            for(int i=0;i<(acc-cnt+1);i++)
                printf("0");
        }
        else{
            for(int i=0;i<cnt;i++){
                printf("%c",pNum[i]);
                if(i==acc)
                    printf(".");
            }
        }
    }
    return 0;
}
