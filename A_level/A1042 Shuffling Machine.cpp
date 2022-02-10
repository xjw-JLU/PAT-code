#include<iostream>
#include<stdio.h>

using namespace std;
void transfor(int i);

int main(void){
    int k;
    scanf("%d",&k);
    int a[55];
    int b[55];
    for(int i=1;i<55;i++){
        a[i]=i;
        scanf("%d",&b[i]);
    }
    for(int j1=0;j1<k;j1++){
        for(int j2=1;j2<55;j2++){
            a[j2]=b[a[j2]];
        }
    }
    int c[55];
    for(int i=1;i<55;i++){
        for(int j=1;j<55;j++){
            if(a[j]==i){
                c[i]=j;
            }
        }
    }
    for(int i=1;i<55;i++){
        transfor(c[i]);
        if(i!=54)
            printf(" ");
    }
    return 0;
}
void transfor(int i){
    if(i<=13)
        printf("%c",'S');
    else if(i<=26)
        printf("%c",'H');
    else if(i<=39)
        printf("%c",'C');
    else if(i<=52)
        printf("%c",'D');
    else
        printf("%c",'J');
    int t=i%13;
    if(t==0)
        t=13;
    printf("%d",t);
}
