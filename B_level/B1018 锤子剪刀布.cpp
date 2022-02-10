#include<iostream>
#include<stdio.h>

using namespace std;
int maxn=110;
int Game(char a,char b);//a>b@1;a=b@0;a<b@-1

int main(void){

    long long n;
    scanf("%lld",&n);
    getchar();
    int a1=0;
    int a2=0;
    int a3=0;
    int b1=0;
    int b2=0;
    int b3=0;
    int B1=0;
    int c1=0;
    int j1=0;
    int B2=0;
    int c2=0;
    int j2=0;
    for(int i=0;i<n;i++){
        char a,b;
        scanf("%c %c",&a,&b);
        getchar();
        if(Game(a,b)==1){
            a1++;
            b3++;
            if(a=='C')
                c1++;
            else if(a=='J')
                j1++;
            else
                B1++;
        }
        else if(Game(a,b)==0){
            a2++;
            b2++;
        }
        else{
            a3++;
            b1++;
            if(b=='C')
                c2++;
            else if(b=='J')
                j2++;
            else
                B2++;
        }

    }
    char max1;
    char max2;
    if(B1>=c1&&B1>=j1)
        max1='B';
    if(c1>B1&&c1>=j1)
        max1='C';
    if(j1>B1&&j1>c1)
        max1='J';

    if(B2>=c2&&B2>=j2)
        max2='B';
    if(c2>B2&&c2>=j2)
        max2='C';
    if(j2>B2&&j2>c2)
        max2='J';
    printf("%d %d %d\n",a1,a2,a3);
    printf("%d %d %d\n",b1,b2,b3);
    printf("%c %c",max1,max2);
    return 0;
}
int Game(char a,char b){
    if(a=='C'&&b=='C')
        return 0;
    if(a=='C'&&b=='J')
        return 1;
    if(a=='C'&&b=='B')
        return -1;

    if(a=='J'&&b=='J')
        return 0;
    if(a=='J'&&b=='B')
        return 1;
    if(a=='J'&&b=='C')
        return -1;

    if(a=='B'&&b=='B')
        return 0;
    if(a=='B'&&b=='C')
        return 1;
    if(a=='B'&&b=='J')
        return -1;
}
