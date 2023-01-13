#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int play(string,int);
main()
{
    int holidays,weekends;
    string year;
   
    cout<<"Enter year(normal,leap):";
    cin>>year;
    cout<<"enter holidays:";
    cin>>holidays;
    cout<<"enter weekends:";
    cin>>weekends;
    float result =play(year,holidays);
    cout<<result;

}
 int play(string type,int vacations)
{ 
    float a,b,c;
    int e;
  if(type=="normal")
  {
    a=48*0.75;
    b=vacations*0.67;
    c=a+b;
    e=c;

  }
  else if(type=="leap")
  {
   
   a=48*0.75;
    b=vacations*0.67;
    c=a+b;
    c=c+(c*0.15);
    e=c;

  }
  return e;

}