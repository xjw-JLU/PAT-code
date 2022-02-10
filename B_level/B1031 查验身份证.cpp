#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

    int n;
    char ide[30];
    int power[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char MM[12]="10X98765432";
    scanf("%d",&n);
    int pd2=0;

    for(int i=0;i<n;i++){
        scanf("%s",ide);
        int pd=0;

        int acc=0;
        for(int j=0;j<17;j++){
            if(ide[j]>='0'&&ide[j]<='9'){
                int nide=ide[j]-48;
                acc=acc+nide*power[j];
            }
            else{
                pd=1;
                break;
            }
        }
        int z=acc%11;
        if(MM[z]!=ide[17])
            pd=1;
        if(pd==1){
                pd2=1;
            printf("%s\n",ide);
        }


    }
    if(pd2==0)
        printf("All passed");
    return 0;
}
