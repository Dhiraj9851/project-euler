
// program 1

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     int i, sum=0;
     for(i=3;i<1000;i++)
     {
         if(i%3==0 or i%5==0)
         {
             sum += i;
         }
     }
     cout<<"Sum = "<<sum;
     return 0;
}