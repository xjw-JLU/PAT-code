#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){

    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("#");

    int spri[14];
    int cnt=0;
    do{
        int t1=n1%13;
        n1/=13;
        spri[cnt]=t1;
        cnt++;
    }while(n1!=0);
    if(cnt==1){
        spri[cnt]=0;
        cnt++;
    }
    for(int i=cnt-1;i>=0;i--){
        int t1=spri[i];
        if(t1==10)
            printf("A");
        else if(t1==11)
            printf("B");
        else if(t1==12)
            printf("C");
        else
            printf("%d",t1);
    }

    int spri2[14];
    int cnt2=0;
    do{
        int t1=n2%13;
        n2/=13;
        spri2[cnt2]=t1;
        cnt2++;
    }while(n2!=0);
    if(cnt2==1){
        spri2[cnt2]=0;
        cnt2++;
    }
    for(int i=cnt2-1;i>=0;i--){
        int t1=spri2[i];
        if(t1==10)
            printf("A");
        else if(t1==11)
            printf("B");
        else if(t1==12)
            printf("C");
        else
            printf("%d",t1);
    }

    int spri3[14];
    int cnt3=0;
    do{
        int t1=n3%13;
        n3/=13;
        spri3[cnt3]=t1;
        cnt3++;
    }while(n3!=0);
    if(cnt3==1){
        spri3[cnt3]=0;
        cnt3++;
    }
    for(int i=cnt3-1;i>=0;i--){
        int t1=spri3[i];
        if(t1==10)
            printf("A");
        else if(t1==11)
            printf("B");
        else if(t1==12)
            printf("C");
        else
            printf("%d",t1);
    }
    return 0;
}
