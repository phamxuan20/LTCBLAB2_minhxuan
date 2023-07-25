#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
    int chuc,dv;
    printf("cac so tu 10 den 99 thoa dieu kien:");

    for(int i=10; i<100; i++)
    {
        dv=i%10;
        chuc=i/10;
        if(dv*chuc ==2*(dv+chuc))
            printf("%4d",i);
    }
}