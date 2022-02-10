#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

char spri[40][10];
int scnt=0;
void toCn(char *tmp,char i);
int xjw();
int main(void){

    xjw();

    for(int i=scnt-1;i>=0;i--){
        printf("%s",spri[i]);
        if(i!=0)
            printf(" ");
    }
    return 0;
}
int xjw(){
    char cdigits2[20];
    char cdigits[20];
    scanf("%s",cdigits2);
    if(cdigits2[0]=='-'){
        printf("Fu ");
        strcpy(cdigits,cdigits2+1);
    }
    else
        strcpy(cdigits,cdigits2);

    if(cdigits2[0]=='0'){
        printf("ling");
        return 1;
    }
    int mlen=strlen(cdigits);
    int i=mlen-1;//个位
    int cnt=1;//个位
    int pd=0;//目前还没有0
    if(cdigits[i]!='0'){
        toCn(spri[scnt],cdigits[i]);
        scnt++;
    }
    else
        pd=1;

    i--;
    if(i<0)
        return 1;
    cnt++;//十位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        strcpy(spri[scnt],"Shi");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//百位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        strcpy(spri[scnt],"Bai");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//千位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        strcpy(spri[scnt],"Qian");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//万位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        strcpy(spri[scnt],"Wan");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//十位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        if(cdigits[i+1]=='0'){
            strcpy(spri[scnt],"Wan");
            scnt++;
        }

        strcpy(spri[scnt],"Shi");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//百位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        if(cdigits[i+1]=='0'){
            strcpy(spri[scnt],"Wan");
            scnt++;
        }

        strcpy(spri[scnt],"Bai");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//千位
    if(cdigits[i]=='0'){
        if(pd==0){
            pd=1;
            strcpy(spri[scnt],"ling");
            scnt++;
        }
    }
    else{
        if(cdigits[i+1]=='0'){
            strcpy(spri[scnt],"Wan");
            scnt++;
        }

        strcpy(spri[scnt],"Qian");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }

    i--;
    if(i<0)
        return 1;
    cnt++;//亿位
    if(cdigits[i]!='0'){
        strcpy(spri[scnt],"Yi");
        scnt++;
        toCn(spri[scnt],cdigits[i]);
        scnt++;
        pd=0;
    }
}
void toCn(char *tmp,char i){
    if(i=='0')
        strcpy(tmp,"ling");
    else if(i=='1')
        strcpy(tmp,"yi");
    else if(i=='2')
        strcpy(tmp,"er");
    else if(i=='3')
        strcpy(tmp,"san");
    else if(i=='4')
        strcpy(tmp,"si");
    else if(i=='5')
        strcpy(tmp,"wu");
    else if(i=='6')
        strcpy(tmp,"liu");
    else if(i=='7')
        strcpy(tmp,"qi");
    else if(i=='8')
        strcpy(tmp,"ba");
    else if(i=='9')
        strcpy(tmp,"jiu");
}

