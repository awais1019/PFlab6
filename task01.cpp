#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float totalincome(string,int,int);
main()
{
    string screen;
    int r,c;
    cout<<"enter screen:";
    cin>>screen;
    cout<<"number of rows:";
    cin>>r;
    cout<<"number of columns:";
    cin>>c;
    float result=totalincome(screen,r,c);
    cout<<"earing is "<<result;
}
float totalincome(string screen,int r,int c)
{
  float a,b;
  if(screen=="premier")
  {
    a=r*c*12.0;
    b=a;

  }
   else if(screen=="normal")
  {
    a=r*c*7.5;
    b=a;

  }
     else if(screen=="discount")
  {
    a=r*c*5.0;
    b=a;

  }
  return b;


}
 