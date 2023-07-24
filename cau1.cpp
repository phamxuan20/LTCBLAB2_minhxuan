#include<iostream>
using namespace std;
int main()
{
  int n;
  float S;
  S = 0;
  do
  {
    cout<<"\n Nhập vào số n: ";
    cin>>n;
    if(n < 1)
      {
      cout<<"\n Số n phải lớn hơn hoặc bằng 1, vui lòng nhập lại !";
      }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / (2 * i);
  }
  cout<<"\n Tổng 1/2 + 1/4 + ... + 1/"<<n*2<<" là: "<< S;
 return 0;
}