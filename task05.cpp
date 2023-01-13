#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float cheap(int,string);
main()
{
    int km;
    string name;
    cout<<"Enter kilometers:";
    cin>>km;
    cout<<"Enter period(day,night)";
    cin>>name;
    float result=cheap(km,name);
    cout<<result;

}
float cheap(int km ,string name)
{
    float rate,a;
  if(km<10)
  {
    if(name=="day")
    {
    rate=(0.79*km) + 0.7;
    a=rate;
    }
    else
    {
      rate=(0.90*km) + 0.7;
      a=rate;
    }
  } 
 else if(km<20 && (name=="day" || name=="night"))
  {
    rate=km*0.06;
    a=rate;
  }
   else if(km<100 && (name=="day" || name=="night"))
    {
      rate=km*0.09;
      a=rate;
    
    }
    return a;



}
