#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

    double acc=1;
    for(int i=0;i<3;i++){
        double tmp1,tmp2,tmp3;
        scanf("%lf %lf %lf",&tmp1,&tmp2,&tmp3);
        if(tmp1>=tmp2&&tmp1>=tmp3){
            printf("W ");
            acc*=tmp1;
        }
        else if(tmp2>tmp1&&tmp2>=tmp3){
            printf("T ");
            acc*=tmp2;
        }
        else{
            printf("L ");
            acc*=tmp3;
        }
        //printf("%f ",acc);
        //printf("%f %f %f",tmp1,tmp2,tmp3);
    }
    printf("%.2f",(acc*0.65-1)*2);
    return 0;
}
