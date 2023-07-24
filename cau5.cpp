#include<stdio.h>
int main()
{
    //khai bao a, b
    int a, b;
    //nhap a
    printf("nhap a:");
    scanf("%d",&a);
    //nhap b
    printf("nhap b:");
    scanf("%d",&b);
    // Lap t0i khi 1 trong 2 so a hoac b bang 0
    while (a*b != 0){ 
        if (a > b){
            a %= b; // a = a % b
        }else{
            b %= a;
        }
    }
    //in UCLN ra man hinh
    printf("UCLN là :%d",a+b);
}