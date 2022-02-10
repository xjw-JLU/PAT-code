#include<iostream>
#include<stdio.h>
using namespace std;
struct per{
    char username[20];
    char password[20];
};
struct per Mper[1100];
int main(void){
    int n;
    scanf("%d",&n);
    int cnt=0;
    int change[1100];
    for(int i=0;i<n;i++){
        scanf("%s %s",Mper[i].username,Mper[i].password);
        int index=0;
        int pd=1;
        while(Mper[i].password[index]!='\0'){
            if(Mper[i].password[index]=='1'){
                Mper[i].password[index]='@';
                pd=0;
            }else if(Mper[i].password[index]=='0'){
                Mper[i].password[index]='%';
                pd=0;
            }else if(Mper[i].password[index]=='l'){
                Mper[i].password[index]='L';
                pd=0;
            }else if(Mper[i].password[index]=='O'){
                Mper[i].password[index]='o';
                pd=0;
            }
            index++;
        }
        if(pd==0){
           change[cnt]=i;
           cnt++;
        }
    }
    if(cnt==0){
        if(n==1)
            printf("There is 1 account and no account is modified");
        else
            printf("There are %d accounts and no account is modified",n);
    }
    else{
        printf("%d\n",cnt);
        for(int i=0;i<cnt;i++){
            printf("%s %s",Mper[change[i]].username,Mper[change[i]].password);
            if(i!=cnt-1)
                printf("\n");

        }
    }

    return 0;
}
