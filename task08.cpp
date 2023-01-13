#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float welcome(float,string,int);
float a,b;
main()
{
  float budget;
  string category;
  int quantity;
  cout<<"enter budget:";
  cin>>budget;
  cout<<"enter category:";
  cin>>category;
  cout<<"enter number of people:";
  cin>>quantity;
  float result=welcome(budget,category,quantity);
  if(a>b)
  cout<<"YES! YOU HAVE " << result<<" QR LEFT:";
  else
  cout<<"NOt ENOUGH MONEY YOU NEED  "<<result<<" Money";




}
float welcome(float budget,string type,int number)
{
   float c,d;
   if(type=="normal" && number<=4)
   {
     a=budget-(budget*0.75);
     b=number*249.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   }
    else if(type=="normal" && number<=9)
   {
     a=budget-(budget*0.60);
     b=number*249.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
    else if(type=="normal" && number<=24)
   {
     a=budget-(budget*0.50);
     b=number*249.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
     else if(type=="normal" && number<=49)
   {
     a=budget-(budget*0.40);
     b=number*249.99;
    if(a>b)
     c=a-b;
     else
     c=b-a;
     
     d=c;
   } 
    else if(type=="normal" && number>=50)
   {
     a=budget-(budget*0.25);
     b=number*249.99;
    if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
    else if(type=="vip" && number<=4)
   {
     a=budget-(budget*0.75);
     b=number*499.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
    else if(type=="vip" && number<=9)
   {
     a=budget-(budget*0.60);
     b=number*499.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
    else if(type=="vip" && number<=24)
   {
     a=budget-(budget*0.50);
     b=number*499.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
     else if(type=="vip" && number<=49)
   {
     a=budget-(budget*0.40);
     b=number*499.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
    else if(type=="vip" && number>=50)
   {
     a=budget-(budget*0.25);
     b=number*499.99;
     if(a>b)
     c=a-b;
     else
     c=b-a;
     d=c;
   } 
   return d;




}