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
    ull mul=1;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
        mul=mul*x;
    }
    if(mul%10==2 || mul%10==3 || mul%10==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }    
   }
return 0;
}
