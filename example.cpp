#include<iostream>
#include<windows.h>
#include<cmath>
int isgreterest(int num1,int num2,int num3);
using namespace std;


main()
{
  int n1,n2,n3;
  cout<<"enter number 1:";
  cin>>n1;
  cout<<"enter number 2:";
  cin>>n2;
  cout<<"enter number 3:";
  cin>>n3;
  int result=isgreterest(n1,n2,n3);
  cout<<"biggest number is "<<result;
  
 





}

int isgreterest(int n1,int n2,int n3)
{
    int gretest;
    if(n1>n2 && n1>n3)
    {
       gretest=n1;
    }
   else if(n2>n1 && n2>n3)
   {
       gretest=n2;
   }
   else if(n3>n1 && n3>n2)
   {
    gretest=n3;
   }
     return gretest;


}