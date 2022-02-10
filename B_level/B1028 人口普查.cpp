#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct person{
    char name[8];
    char birthday[15];
};
int ifCorrect(char birthday[15]); //合法返回1,否则返回0
int BCompare(char birthday[15],char birthday2[15]);//b1>b2*1;b1==b2*0;b1<b2*-1

struct person Persons[100100];
int main(void){

    int n;
    scanf("%d",&n);
    int cnt=0;//合法生日数量
    int mmax=0;//最年长的
    int mmin=0;//最小的
    //寻找第一个合法生日
    int first=0;

    for(int i=0;i<n;i++){
        scanf("%s %s",Persons[i].name,Persons[i].birthday);
        if(ifCorrect(Persons[i].birthday)==1){
            if(cnt==0){
                first=mmax=mmin=i;
            }
            else{
                if(BCompare(Persons[i].birthday,Persons[mmax].birthday)==1)
                    mmax=i;
                if(BCompare(Persons[i].birthday,Persons[mmin].birthday)==-1)
                    mmin=i;
            }
            cnt++;
        }

    }
    if(cnt==0)
        printf("%d",0);
    else
        printf("%d %s %s",cnt,Persons[mmin].name,Persons[mmax].name);
    return 0;
}
int ifCorrect(char birthday[15]){
    char years[5];
    char month[5];
    char date[5];
    for(int i=0;i<4;i++)
        years[i]=birthday[i];
    years[4]='\0';
    month[0]= birthday[5];
    month[1]= birthday[6];
    month[2]= '\0';
    date[0]=birthday[8];
    date[1]=birthday[9];
    date[2]='\0';
    if(strcmp(years,"1814")<0)
        return 0;
    else if(strcmp(years,"1814")==0){
        if(strcmp(month,"09")<0){
            return 0;
        }
        else if(strcmp(month,"09")==0){
            if(strcmp(date,"06")<0)
                return 0;
            else
                return 1;
        }
        else
            return 1;
    }
    else{ //年份>1814
        if(strcmp(years,"2014")>0)
            return 0;
        else if(strcmp(years,"2014")==0){
            if(strcmp(month,"09")>0)
                return 0;
            else if(strcmp(month,"09")==0){
                if(strcmp(date,"06")>0)
                    return 0;
                else
                    return 1;
            }
            else{
                return 1;
            }
        }
        else{
            return 1;
        }
    }
}
int BCompare(char birthday[15],char birthday2[15]){
    char years[5];
    char month[5];
    char date[5];
    for(int i=0;i<4;i++)
        years[i]=birthday[i];
    years[4]='\0';
    month[0]= birthday[5];
    month[1]= birthday[6];
    month[2]= '\0';
    date[0]=birthday[8];
    date[1]=birthday[9];
    date[2]='\0';

    char years2[5];
    char month2[5];
    char date2[5];
    for(int i=0;i<4;i++)
        years2[i]=birthday2[i];
    years2[4]='\0';
    month2[0]= birthday2[5];
    month2[1]= birthday2[6];
    month2[2]= '\0';
    date2[0]=birthday2[8];
    date2[1]=birthday2[9];
    date2[2]='\0';

    if(strcmp(years,years2)>0)
        return 1;
    else if (strcmp(years,years2)<0)
        return -1;
    else{
        if(strcmp(month,month2)>0)
            return 1;
        else if(strcmp(month,month2)<0)
            return -1;
        else{
            if(strcmp(date,date2)>0)
                return 1;
            else if(strcmp(date,date2)<0)
                return -1;
            else
                return 0;
        }
    }
}
