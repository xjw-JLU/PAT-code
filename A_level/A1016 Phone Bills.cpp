#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;


struct records{
    char name[30];
    char month[5];
    char alldate[20];
    char date[20];
    int state;//on=1;off=0

}mrecord[2000];

struct per{
    char name[30];
    char month[5];
    int pcnt;
    int record1[2000]; //on
    int record2[2000]; //of
    double amount[2000];
    double totalMount;
}mper[2000];

int num=0;
int rate[30];
double tocharge(char *date1,char *date2){//计算两个日期的费用
    char cdd1[3];
    cdd1[0]=date1[0];
    cdd1[1]=date1[1];
    cdd1[2]='\0';
    char chh1[3];
    chh1[0]=date1[3];
    chh1[1]=date1[4];
    chh1[2]='\0';
    char cmm1[3];
    cmm1[0]=date1[6];
    cmm1[1]=date1[7];
    cmm1[2]='\0';
    char cdd2[3];
    cdd2[0]=date2[0];
    cdd2[1]=date2[1];
    cdd2[2]='\0';
    char chh2[3];
    chh2[0]=date2[3];
    chh2[1]=date2[4];
    chh2[2]='\0';
    char cmm2[3];
    cmm2[0]=date2[6];
    cmm2[1]=date2[7];
    cmm2[2]='\0';

    int dd1=atoi(cdd1);
    int hh1=atoi(chh1);
    int mm1=atoi(cmm1);
    int dd2=atoi(cdd2);
    int hh2=atoi(chh2);
    int mm2=atoi(cmm2);
   //printf("%d %d %d## %d %d %d ",dd1,hh1,mm1,dd2,hh2,mm2);
    int all=0;
    if(dd1<dd2){
        all+=(60-mm1)*rate[hh1];
        hh1++;
        for(int ii=hh1;ii<=23;ii++){
            all+=60*rate[ii];
        }
        dd1++;
        int sub=dd2-dd1;
        int daily=0;
        for(int i=0;i<24;i++)
            daily+=(60*rate[i]);
        all+=(sub*daily);
        hh1=0;
        mm1=0;
    }

    if(hh1<hh2){
        all+=(60-mm1)*rate[hh1];
        hh1++;
        for(int i=hh1;i<hh2;i++){
            all+=60*rate[i];
        }
        all+=mm2*rate[hh2];
    }
    else
        all+=(mm2-mm1)*rate[hh2];

    //printf("  !%d\n",all);
    double ret=(double)all/100.0;

    return ret;
}

bool cmp(records m1,records m2){

    if(strcmp(m1.name,m2.name)<0)
        return true;
    else if(strcmp(m1.name,m2.name)>0)
        return false;
    else{
        if(strcmp(m1.date,m2.date)<0)
            return true;
        else
            return false;
    }

}
void msearch(records *mrecord,int n){ //
    for(int i=0;i<n;i++){
        int j=i;
        int pd=0;

        while(j<n){
            if(strcmp(mrecord[j].name,mrecord[i].name)!=0){
                break;
            }
            if(j<n-1&&strcmp(mrecord[j].name,mrecord[j+1].name)==0&&mrecord[j].state==1&&mrecord[j+1].state==0&&strcmp(mrecord[j].alldate,mrecord[j+1].alldate)<0){
                mper[num].record1[mper[num].pcnt]=j;
                mper[num].record2[mper[num].pcnt]=j+1;
                mper[num].amount[mper[num].pcnt]=tocharge(mrecord[j].date,mrecord[j+1].date);
                mper[num].totalMount+=mper[num].amount[mper[num].pcnt];
                mper[num].pcnt++;
                j=j+2;
                pd=1;
            }
            else
                j++;
        }
        i=j-1;
        if(pd==1){
            strcpy(mper[num].name,mrecord[i].name);
            strcpy(mper[num].month,mrecord[i].month);
            num++;
        }
    }
}

int toTimes(char *date1,char *date2){
    char cdd1[3];
    cdd1[0]=date1[0];
    cdd1[1]=date1[1];
    cdd1[2]='\0';
    char chh1[3];
    chh1[0]=date1[3];
    chh1[1]=date1[4];
    chh1[2]='\0';
    char cmm1[3];
    cmm1[0]=date1[6];
    cmm1[1]=date1[7];
    cmm1[2]='\0';
    char cdd2[3];
    cdd2[0]=date2[0];
    cdd2[1]=date2[1];
    cdd2[2]='\0';
    char chh2[3];
    chh2[0]=date2[3];
    chh2[1]=date2[4];
    chh2[2]='\0';
    char cmm2[3];
    cmm2[0]=date2[6];
    cmm2[1]=date2[7];
    cmm2[2]='\0';

    int dd1=atoi(cdd1);
    int hh1=atoi(chh1);
    int mm1=atoi(cmm1);
    int dd2=atoi(cdd2);
    int hh2=atoi(chh2);
    int mm2=atoi(cmm2);

    int minute1=((dd1*24)+hh1)*60+mm1;
    int minute2=((dd2*24)+hh2)*60+mm2;
    return minute2-minute1;
}

int main(void){

    for(int i=0;i<24;i++)
        scanf("%d",&rate[i]);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char tmp[15];
        char tmp2[20];
        scanf("%s %s %s",mrecord[i].name,tmp2,tmp);
        mrecord[i].month[0]=tmp2[0];
        mrecord[i].month[1]=tmp2[1];
        mrecord[i].month[2]='\0';
        strcpy(mrecord[i].alldate,tmp2);
        strcpy(mrecord[i].date,tmp2+3);
        if(strcmp(tmp,"on-line")==0)
            mrecord[i].state=1;
        else
            mrecord[i].state=0;

        //初始化
        mper[i].pcnt=0;
        mper[i].totalMount=0.0;
    }
    sort(mrecord,mrecord+n,cmp);


    msearch(mrecord,n);


    for(int i=0;i<num;i++){
        printf("%s %s\n",mper[i].name,mper[i].month);
        for(int j=0;j<mper[i].pcnt;j++){
            int index1=mper[i].record1[j];
            int index2=mper[i].record2[j];
            int times=toTimes(mrecord[index1].date,mrecord[index2].date);
            printf("%s %s %d $%.2f\n",mrecord[index1].date,mrecord[index2].date,times,mper[i].amount[j]);
        }
        printf("Total amount: $%.2f",mper[i].totalMount);
        if(i!=num-1)
            printf("\n");
    }
    return 0;
}


