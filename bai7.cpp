#include<iso646.h>
#include<stdio.h>
int main()
{
    int x;
    char c;
    do{
    printf("Loai phong thue:");scanf("%c",&c);
    }while(c!='a'&&c!='b'&&c!='c');
    do{
    printf("\nSo ngay thue: ");scanf("%d",&x);
    }while(x<1);
    float A=250000,B=200000,C=150000;
    float A1=0.1,B1=0.08,C1=0.08;
    float sotien;
    if(x<=12&&x>=1){
              sotien = (c=='a') ? (A*x):((c=='b') ? (B * x):(C * x));
    }
    else{
         sotien=(c=='a') ? (A*A1*x):((c=='b') ? (B*B1*x):(C*C1*x));
    }
    printf("\nSo tien nhan duoc la:%f",sotien);
 
    return 0;
} 