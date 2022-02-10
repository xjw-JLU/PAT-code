#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct Person{
    char ID[20];
    char signIn[10];
    char signOut[10];
};

int main(void){

    int m;
    scanf("%d",&m);
    struct Person mpersons[m+10];
    int mearly=0;
    int mlast=0;
    for(int i=0;i<m;i++){
        scanf("%s %s %s",mpersons[i].ID,mpersons[i].signIn,mpersons[i].signOut);
        if(strcmp(mpersons[i].signIn,mpersons[mearly].signIn)<0)
            mearly=i;
        if(strcmp(mpersons[i].signOut,mpersons[mlast].signOut)>0)
            mlast=i;
    }
    printf("%s %s",mpersons[mearly].ID,mpersons[mlast].ID);
    return 0;
}
