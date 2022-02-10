#include<iostream>
#include<stdio.h>

using namespace std;
char mstring[100][100];
int main(void){


    int cnt=0;
    int index=0;
    char tmp;
    do{
        tmp=getchar();
        if(tmp!=' '&&tmp!='\n'){
            mstring[cnt][index]=tmp;
            index++;
        }
        else{
            mstring[cnt][index]='\0';
            cnt++;
            index=0;
        }

    }while(tmp!='\n');

    for(int i=cnt-1;i>=0;i--){
        printf("%s",mstring[i]);
        if(i!=0)
            printf(" ");
    }

    return 0;
}
