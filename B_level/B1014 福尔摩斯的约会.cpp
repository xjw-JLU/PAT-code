#include<stdio.h>
#include<iostream>

using namespace std;

int main(void){

    char data[5][100];

    for(int i=0;i<4;i++)
        scanf("%s",data[i]);
    int index=0;
    while(data[0][index]!='\0'&&data[1][index]!='\0'){

        if(data[0][index]==data[1][index]&&data[0][index]>='A'&&data[0][index]<='G'){
            char tmp=data[0][index];
            if(tmp=='A')
                printf("MON");
            else if(tmp=='B')
                printf("TUE");
            else if(tmp=='C')
                printf("WED");
            else if(tmp=='D')
                printf("THU");
            else if(tmp=='E')
                printf("FRI");
            else if(tmp=='F')
                printf("SAT");
            else
                printf("SUN");
            break;
        }
        index++;
    }
    index++;
    while(data[0][index]!='\0'&&data[1][index]!='\0'){

        if(data[0][index]==data[1][index]&&((data[0][index]>='A'&&data[0][index]<='N')||(data[0][index]>='0'&&data[0][index]<='9'))){
            char tmp=data[0][index];
            if(tmp>='0'&&tmp<='9')
                printf(" 0%c:",tmp);
            else{
                int nTmp=tmp-55;
                printf(" %d:",nTmp);
            }
            break;
        }
        index++;
    }

    int index2=0;
    while(data[2][index2]!='\0'&&data[3][index2]!='\0'){
        if(data[2][index2]==data[3][index2]&&((data[2][index2]>='A'&&data[2][index2]<='Z')||(data[2][index2]>='a'&&data[2][index2]<='z'))){
            printf("%02d",index2);
            break;
        }
        index2++;
    }
    return 0;
}
