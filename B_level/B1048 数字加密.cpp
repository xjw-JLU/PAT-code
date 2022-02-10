#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(void){

    char aa1[2000];
    char bb1[2000];
    scanf("%s %s",aa1,bb1);
    int ia1=strlen(aa1)-1;
    int ib1=strlen(bb1)-1;
    char aa[2000];
    char bb[2000];
    if(ia1>=ib1){
        strcpy(aa,aa1);
        aa[ia1+1]='\0';
        int i;
        for(i=0;i<(ia1-ib1);i++)
            bb[i]='0';
        for(int j=0;j<=ib1+1;j++){
            bb[i]=bb1[j];
            i++;
        }
    }
    else{
        strcpy(bb,bb1);
        bb[ib1+1]='\0';
        int i;
        for(i=0;i<(ib1-ia1);i++)
            aa[i]='0';
        for(int j=0;j<=ia1+1;j++){
            aa[i]=aa1[j];
            i++;
        }
    }
    //printf("%s %s\n",aa,bb);
    int change=1;
    int ia=strlen(aa)-1;
    int ib=strlen(bb)-1;
    while(ia>=0&&ib>=0){
        int Na=aa[ia]-48;
        int Nb=bb[ib]-48;
        if(change==1){
            int madd=(Na+Nb)%13;
            if(madd==10)
                bb[ib]='J';
            else if(madd==11)
                bb[ib]='Q';
            else if(madd==12)
                bb[ib]='K';
            else{
                bb[ib]=48+madd;
            }
            change=0;
        }
        else{
            int msub=Nb-Na;
            if(msub<0)
                msub+=10;
            bb[ib]=48+msub;
            change=1;
        }
        ia--;
        ib--;
    }
    printf("%s",bb);

    return 0;
}
