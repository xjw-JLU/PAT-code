#include<iostream>
#include<stdio.h>
using namespace std;

struct stu{
    char name[15];
    char ID[15];
    char gender;
    int grade;
};

int main(void){

    int n;
    scanf("%d",&n);
    struct stu mstus[n+10];
    int gmale=-1;
    int mfemale=-1;
    for(int i=0;i<n;i++){
        scanf("%s %c %s %d",mstus[i].name,&mstus[i].gender,mstus[i].ID,&mstus[i].grade);
        if(mstus[i].gender=='M'){
            if(gmale==-1)
                gmale=i;
            else{
                if(mstus[i].grade<mstus[gmale].grade)
                    gmale=i;
            }
        }
        else{
            if(mfemale==-1)
                mfemale=i;
            else{
                if(mstus[i].grade>mstus[mfemale].grade)
                    mfemale=i;
            }
        }
    }
    if(mfemale==-1)
        printf("Absent\n");
    else
        printf("%s %s\n",mstus[mfemale].name,mstus[mfemale].ID);
    if(gmale==-1)
        printf("Absent\n");
    else
        printf("%s %s\n",mstus[gmale].name,mstus[gmale].ID);
    if(mfemale==-1||gmale==-1)
        printf("NA");
    else
        printf("%d",mstus[mfemale].grade-mstus[gmale].grade);

    return 0;
}
