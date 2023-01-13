#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float discount(float,string,string);
main()
{
    float amount,result;
    string day,month;
    cout<<"enter amount:";
    cin>>amount;
    cout<<"enter day:";
    cin>>day;
    cout<<"enter month:";
    cin>>month;
    result=discount(amount,day,month);
    cout<<"disoount is "<<result;






}
float discount(float amount,string day,string month)
{
 float discount,discount1;
 if(day="sunday && month=="october")
 {
  discount=amount-(amount*0.1);
  discount1=discount;
 }
 else if("sunday && month!="october" )
 {
    discount=amount-(amount*0.05); 
    discount1=discount;
 }  
    return discount1;

}