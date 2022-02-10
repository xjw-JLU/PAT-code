#include<iostream>
#include<stdio.h>
using namespace std;

int d[100100];
int D1Ton[100100];
int main(void){
    int n;
    scanf("%d",&n);
    long long acc=0;
    D1Ton[1]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&d[i]);
        acc+=d[i];
        D1Ton[i+1]=acc;
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int Mstart,Mend;
        scanf("%d %d",&Mstart,&Mend);
        if(Mstart>Mend){
            int tmp=Mstart;
            Mstart=Mend;
            Mend=tmp;
        }
        int Clockwise=D1Ton[Mend]-D1Ton[Mstart];//顺时针方向的value
        int antiClockwise=acc-Clockwise;
        if(Clockwise>antiClockwise)
            printf("%d",antiClockwise);
        else
            printf("%d",Clockwise);
        if(i!=m-1)
            printf("\n");

    }

    return 0;
}
