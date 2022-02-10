#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(void){

    char Ncc[2000];
    int cnt[20];
    memset(cnt,0,sizeof(cnt));
    scanf("%s",Ncc);
    int index=0;
    while(Ncc[index]!='\0'){
        int Num=Ncc[index]-48;
        cnt[Num]++;
        index++;
    }

    int pd=0;
    for(int i=0;i<10;i++){
        if(cnt[i]!=0){
            if(pd==1)
                printf("\n");
            printf("%d:%d",i,cnt[i]);
            pd=1;
        }

    }

    return 0;
}
