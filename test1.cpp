#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

bool cmp(int a1,int a2);
int main(void){


    char a='1';
    char z='z';
    char A='A';
    char Z='Z';
    //scanf("%c",&a);
    int tmp=a-55;
    bool ttt=false;
    printf("%d %d %d %d %d\n",true,false,1>3,ttt,2==2);

    int a1=(2-10)%10;
    //printf("\n%d",a1);

    int aaa[5]={3,4,1,2,7};
    sort(aaa,aaa+2,cmp);
    for(int i=0;i<5;i++)
        printf("\n%d",aaa[i]);

    printf("\n%d",29/10);
    return 0;
}
bool cmp(int a1,int a2){
    if(a1<a2){
        printf("<%d %d\n",a1,a2);
        return true;
    }
    else{
        printf(">%d %d\n",a1,a2);
        return false;
    }

}
