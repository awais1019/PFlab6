#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float checkprice(string,string,int);
main()
{
  string city,product;
  int number;
  cout<<"Enter product name:";
  cin>>product;
  cout<<"Enter city name:";
  cin>>city;
  cout<<"Enter number:";
  cin>>number;
  float result=checkprice(product,city,number);
  cout<<result;



}
float checkprice(string product, string city, int number)
{
   float price,total;
   if (city=="sofia")
   {
     if(product=="cofee")
     {
      price=number*0.50;
      total=price;
     }
     else if(product=="water")
     {
      price=number*0.80;
      total=price;
     }
     else if(product=="beer")
     {
      price=number*1.20;
      total=price;
     }
     else if(product=="sweets")
     {
      price=number*1.45;
      total=price;
     }
      else if(product=="peanuts")
     {
      price=number*1.45;
      total=price;
     }
   }
      if (city=="plovdiv")
    {
      if(product=="coffee")
     {
      price=number*0.40;
      total=price;
     }
      else if(product=="water")
     {
      price=number*0.70;
      total=price;
     }
      else if(product=="beer")
     {
      price=number*1.15;
      total=price;
     }
      else if(product=="sweets")
     {
      price=number*1.30;
      total=price;
     }
      else if(product=="peanuts")
     {
      price=number*1.50;
      total=price;
     }
    }
    if(city=="verna")
    {
       if(product=="coffee")
      {
         price=number*0.45;
         total=price;
      }
       else if(product=="water")
     {
      price=number*0.70;
      total=price;
     }
       else if(product=="beer")
     {
      price=number*1.10;
      total=price;
     }
       else if(product=="sweets")
     {
      price=number*1.35;
      total=price;
     }
       else if(product=="peanuts")
     {
      price=number*1.55;
      total=price;
     }
    }
      return total;
 }








