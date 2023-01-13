#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string checkspeed(float);
main()
{
    float speed;
    cout<<"Enter speed:";
    cin>>speed;
    string result=checkspeed(speed);
    cout<<result;




}
string checkspeed(float speed)
{
  string a;
  if(speed<=10)
  {
    a="slow";
  }
  else if(speed<=50)
  {
    a="average";
  }
    else if(speed<=150)
  {
    a="fast";
  }
    else if(speed<=1000)
  {
    a="ultra-fast";
  }
  else
  {
    a="extremely fast";
  }
  return a;






}