#include<iostream>
#include<stdio.h>
using namespace std;

struct Student{
    char name[20];
    char stuNum[20];
    int grade;

};

int main(void){
    int n;
    scanf("%d",&n);
    struct Student stus[n+5];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",stus[i].name,stus[i].stuNum,&(stus[i].grade));
    }
    int maxIndex=0;
    int minIndex=0;

    for(int i=1;i<n;i++){
        if(stus[i].grade>stus[maxIndex].grade)
            maxIndex=i;
        if(stus[i].grade<stus[minIndex].grade)
            minIndex=i;
    }
    printf("%s %s\n",stus[maxIndex].name,stus[maxIndex].stuNum);
    printf("%s %s",stus[minIndex].name,stus[minIndex].stuNum);

    return 0;
}
