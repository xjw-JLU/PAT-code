#include<iostream>
#include<stdio.h>
using namespace std;

struct Student{
    char AdmissionNum[20];
    int tryNum;
    int testNum;

};
struct Student stus[1010];
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d %d",stus[i].AdmissionNum,&(stus[i].tryNum),&(stus[i].testNum));
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int tmp;
        scanf("%d",&tmp);
        for(int j=0;j<n;j++){
            if(stus[j].tryNum==tmp){
                printf("%s %d\n",stus[j].AdmissionNum,stus[j].testNum);
                break;
            }
        }
    }
    return 0;
}
