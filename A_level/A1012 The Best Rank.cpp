#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

struct students{
    char id[10];
    int agrade;
    int cgrade;
    int mgrade;
    int egrade;
    int bRank;
    char cRank;
    int pd;//pd=0表示无排名，pd=1已有排名
}mstu[3000];

struct mags{
    int agrade;
    int index;
};
struct mags ags[3000];
struct mags cgs[3000];
struct mags mgs[3000];
struct mags egs[3000];
bool cmp(struct mags t1,struct mags t2){
    if(t1.agrade>t2.agrade)
        return true;
    else
        return false;
}
int main(void){

    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",mstu[i].id,&mstu[i].cgrade,&mstu[i].mgrade,&mstu[i].egrade);
        double tmp=((double)mstu[i].cgrade+(double)mstu[i].mgrade+(double)mstu[i].egrade)/3;
        double tmp2=round(tmp);
        mstu[i].agrade=(int)tmp2;
        mstu[i].pd=0;
        ags[i].agrade=mstu[i].agrade;
        cgs[i].agrade=mstu[i].cgrade;
        mgs[i].agrade=mstu[i].mgrade;
        egs[i].agrade=mstu[i].egrade;
        ags[i].index=i;
        cgs[i].index=i;
        mgs[i].index=i;
        egs[i].index=i;
    }
    sort(ags,ags+n,cmp);
    sort(cgs,cgs+n,cmp);
    sort(mgs,mgs+n,cmp);
    sort(egs,egs+n,cmp);
    for(int i=1;i<=n;i++){//所有的第i名
        int aindex=ags[i-1].index;
        if(mstu[aindex].pd==0){
            mstu[aindex].pd=1;
            mstu[aindex].bRank=i;
            mstu[aindex].cRank='A';
        }

        int cindex=cgs[i-1].index;
        if(mstu[cindex].pd==0){
            mstu[cindex].pd=1;
            mstu[cindex].bRank=i;
            mstu[cindex].cRank='C';
        }

        int mindex=mgs[i-1].index;
        if(mstu[mindex].pd==0){
            mstu[mindex].pd=1;
            mstu[mindex].bRank=i;
            mstu[mindex].cRank='M';
        }

        int eindex=egs[i-1].index;
        if(mstu[eindex].pd==0){
            mstu[eindex].pd=1;
            mstu[eindex].bRank=i;
            mstu[eindex].cRank='E';
        }
    }

    for(int i=0;i<m;i++){
        char tmp2[10];
        scanf("%s",tmp2);
        int pd=0;
        for(int j=0;j<n;j++){
            if(strcmp(tmp2,mstu[j].id)==0){
                printf("%d %c",mstu[j].bRank,mstu[j].cRank);
                pd=1;
                break;
            }
        }
        if(pd==0)
            printf("N/A");
        if(i!=m-1)
            printf("\n");
    }


    return 0;
}
