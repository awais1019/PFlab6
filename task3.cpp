#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string checkgender(float,char);
main()
{
  float age;
  char gender;
  cout<<"enter age:";
  cin>>age;
  cout<<"enter gender:";
  cin>>gender;
  string result=checkgender(age,gender);
  cout<<"title is :"<<result;




}
string checkgender(float age,char gender)
{
  string a;
  if(age>16 && gender=='m')
  {
    a="MR";
  }
  else if(age<16 && gender=='m')
  {
    a="MASTER";
  }
  else if(age>16 && gender=='f')
  {
    a="MS";
  }
  else if(age<16 && gender=='f')
  {
    a="Miss";
  }
  return a;



}
