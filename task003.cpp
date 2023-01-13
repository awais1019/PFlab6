#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
bool bigg(int,int,int);
main()
{
    int num1,num2,num3;
    cout<<"enter number 1:";
    cin>>num1;
    cout<<"enter number 2:";
    cin>>num2;
    cout<<"enter number 3:";
    cin>>num3;
    bool result=bigg(num1,num2,num3);
    if(result==true)
    cout<<"Yes";
    else 
     cout<<"NO";




}
bool bigg(int num1,int num2,int num3)
{
   if(num1==num2 && num2==num3 && num1==num3)
       return true;
    else
       return false;




}
