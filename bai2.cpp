#include<iostream>
using namespace std;
int main()
{
  int i, n;
  long S = 0, P = 1;
  do
  {
    cout<<"\nNhập vào số n: ";
    cin>>n;
    if(n < 1)
    {
      cout<<"\nSố n phải lớn hơn hoặc bằng 1, xin vui lòng nhập lại !";
    }
  }while(n < 1);
  //sử dụng vòng lặp for để tính biểu thức
  for(int i = 1; i <= n; i ++){
    P = P * i;
    S = S + P;
  }
  // có thể sử dụng vòng lặp while để tính biểu thức
  // while(i <= n)
  // {
  //    P = P * i;
  //    S = S + P;
  //    i++;
  // }
  cout<<"\nTổng của biểu thức: "<<S;
  return 0;
}