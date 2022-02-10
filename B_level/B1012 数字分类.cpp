#include<iostream>
#include<stdio.h>

using namespace std;
int maxn=1100;
int main(void){

    int n;
    int a[maxn];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int a1=0;
    int a2=0;
    int pd2=0;
    int ji2=1;
    int a3=0;
    double a4=0;
    int pd4=0;
    int a5=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0&&a[i]%2==0)
            a1+=a[i];
        if(a[i]%5==1){
            a2+=a[i]*ji2;
            ji2*=-1;
            pd2=1;
        }
        if(a[i]%5==2)
            a3++;
        if(a[i]%5==3){
            pd4++;
            a4+=a[i];
        }
        if(a[i]%5==4){
            if(a[i]>a5)
                a5=a[i];
        }
    }
    a4/=pd4;
    if(a1!=0)
        printf("%d ",a1);
    else
        printf("N ");

    if(pd2==1)
        printf("%d ",a2);
    else
        printf("N ");

    if(a3!=0)
        printf("%d ",a3);
    else
        printf("N ");

    if(pd4!=0)
        printf("%.1f ",a4);
    else
        printf("N ");
    if(a5!=0)
        printf("%d",a5);
    else
        printf("N");

    return 0;
}

