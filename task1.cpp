#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
char grade(int);
main()
{
  int number;
  cout<<"Enter number:";
  cin>>number;
  char result=grade(number);
  cout<<"Grade is:"<<result;




}
char grade(int n)
{
  char grade1;
  if(n<=50)
  {
    grade1='F';
  }
   else if(n<=60)
  {
   grade1='E';
  } 
   else if(n<=70)
  {
   grade1='D';
  } 
  else if(n<=80)
  {
   grade1='C';
  } 
    else if(n<=85)
  {
   grade1='B';
  } 
    else if(n<=100)
  {
   grade1='A';
  } 
  return grade1;
}


