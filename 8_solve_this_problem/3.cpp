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
 int t;
 cin>>t;
 while(t--)
 {
     int n;
  cin>>n;
  long long binary=0;
  long long pow2=1;
  string s;
  cin>>s;
  for(int i=s.size()-1; i>=0; i--)
  {
   
   
    long long digit=s[i]-'0';
    binary=binary+pow2*digit;
    pow2=pow2*2;

  }  

  cout<<binary<<endl;
 }
        
return 0;
}
