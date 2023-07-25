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
     int x,y,z;
    cin>>x>>y>>z;
    int MAX=max(x,max(y,z));
    int MIN=min(x,min(y,z));
    if(MAX==(MIN+x) ||MAX==(MIN+y) ||MAX==(MIN+z)){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
   }

return 0;
}
