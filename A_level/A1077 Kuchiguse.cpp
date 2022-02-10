#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char minput[150][300];
int main(void){

    int n;
    scanf("%d\n",&n);
    int mindex[300];
    int mmin=300;
    for(int i=0;i<n;i++){
        int jj=0;
        char tmp2=getchar();
        while(tmp2!='\n'){
            minput[i][jj]=tmp2;
            jj++;
            tmp2=getchar();
        }
        minput[i][jj]='\0';
        mindex[i]=strlen(minput[i])-1;
        if(mindex[i]<mmin)
            mmin=mindex[i];
    }

    char mresult[300];
    int cnt=0;

    for(int i=0;i<=mmin;i++){
        int pd=0;
        char tmp=minput[0][mindex[0]];
        for(int j=0;j<n;j++){
            if(tmp!=minput[j][mindex[j]]){
                pd=1;
                break;
            }
            else
                mindex[j]--;
        }
        if(pd==1)
            break;
        else{
            mresult[cnt]=tmp;
            cnt++;
        }
    }
    if(cnt==0)
        printf("nai");
    else{
        for(int i=cnt-1;i>=0;i--)
            printf("%c",mresult[i]);
    }
    return 0;
}
