#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=1)
    {
        if(n%2==0){
            n=n/2;
        }else
        {
            n=(3*n+1)/2;
        }
        sum++;

    }
    printf("%d",sum);
    return 0;
}
