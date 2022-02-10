#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
struct student{
    char Num[20];
    int gradeD;
    int gradeC;
}stu[150000];
int nn,ll,hh;
bool cmp(student a1,student a2);
int main(void){

    scanf("%d %d %d",&nn,&ll,&hh);

    int cnt=0;
    for(int i=0;i<nn;i++){
        student tmp;
        scanf("%s %d %d",tmp.Num,&tmp.gradeD,&tmp.gradeC);
        if(tmp.gradeD>=ll&&tmp.gradeC>=ll){
            strcpy(stu[cnt].Num,tmp.Num);
            stu[cnt].gradeD=tmp.gradeD;
            stu[cnt].gradeC=tmp.gradeC;
            cnt++;
        }
    }

    sort(stu,stu+cnt,cmp);
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        printf("%s %d %d",stu[i].Num,stu[i].gradeD,stu[i].gradeC);
        if(i!=cnt-1)
            printf("\n");
    }
    return 0;
}
bool cmp(student a1,student a2){
    int aGrade1=a1.gradeD+a1.gradeC;
    int aGrade2=a2.gradeD+a2.gradeC;

    if(a1.gradeD>=hh&&a1.gradeC>=hh){
        //printf("%d %d\n",a1.gradeD,a1.gradeC);
        if(a2.gradeD>=hh&&a2.gradeC>=hh){
            if(aGrade1>aGrade2)
                return true;
            else if(aGrade1==aGrade2){
                if(a1.gradeD>a2.gradeD)
                    return true;
                else if(a1.gradeD<a2.gradeD)
                    return false;
                else
                    return strcmp(a1.Num,a2.Num)<0;
            }
            else
                return false;
        }
        else
            return true;
    }
    else if(a1.gradeD>=hh&&a1.gradeC<hh){
        if(a2.gradeD>=hh&&a2.gradeC>=hh)
            return false;
        else if(a2.gradeD>=hh&&a2.gradeC<hh){
            if(aGrade1>aGrade2)
                return true;
            else if(aGrade1==aGrade2){
                if(a1.gradeD>a2.gradeD)
                    return true;
                else if(a1.gradeD<a2.gradeD)
                    return false;
                else
                    return strcmp(a1.Num,a2.Num)<0;
            }
            else
                return false;
        }
        else
            return true;
    }
    else if(a1.gradeD<hh&&a1.gradeC<hh&&(a1.gradeD>=a1.gradeC)){
        //printf("%d %d\n",a1.gradeD,a1.gradeC);
        if(a2.gradeD>=hh&&a2.gradeC>=hh)
            return false;
        else if(a2.gradeD>=hh&&a2.gradeC<hh)
            return false;
        else if(a2.gradeD<hh&&a2.gradeC<hh&&(a2.gradeD>=a2.gradeC)){
            if(aGrade1>aGrade2)
                return true;
            else if(aGrade1==aGrade2){
                if(a1.gradeD>a2.gradeD)
                    return true;
                else if(a1.gradeD<a2.gradeD)
                    return false;
                else
                    return strcmp(a1.Num,a2.Num)<0;
            }
            else
                return false;
        }
        else
            return true;
    }
    else{
       // printf("%d %d\n",a1.gradeD,a1.gradeC);
        if(a2.gradeD>=hh&&a2.gradeC>=hh)
            return false;
        else if(a2.gradeD>=hh&&a2.gradeC<hh)
            return false;
        else if(a2.gradeD<hh&&a2.gradeC<hh&&(a2.gradeD>=a2.gradeC))
            return false;
        else{
            if(aGrade1>aGrade2)
                return true;
            else if(aGrade1==aGrade2){
                if(a1.gradeD>a2.gradeD)
                    return true;
                else if(a1.gradeD<a2.gradeD)
                    return false;
                else
                    return strcmp(a1.Num,a2.Num)<0;
            }
            else
                return false;
        }
    }

}
