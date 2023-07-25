/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    //int, char, long  int,long int, float,double
    // -10^9<int<<10^9
    /*
     -10^12< long int<<10^12
      -10^18<long long int<<10^18
        */
       int mx=INT_MAX;
       cout<<mx<<endl;
          cout<<mx+1<<endl;

      int a=100000;
      int b=100000;
      long long int c= a*1LL*b;
      cout<<c<<endl;    

      double  x=100000;
      double y=100000;
      double z=x*y;
      cout<<z<<endl;
//precision error in double
      cout<<fixed<<setprecision(0)<<z<<endl;
        z=1e24; //we cannot accurately store 10^24 data in double   ,
        cout<<fixed<<setprecision(0)<<z<<endl;
return 0;
}
