#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
bool issimilar(string,string);
main()
{
 string name,name1;
 cout<<"enter word:";
 cin>>name;
 cout<<"enter word:";
 cin>>name1;
 bool result=issimilar(name,name1);
   if(result==true)
   {
      cout<<"yes:";


   }
  else
  {
       cout<<"no";
  }





}
bool issimilar(string a,string b)
{
  if(a==b)
 {
     return true;
 }
   else
  {
    return false;
  }

      return 0;

}