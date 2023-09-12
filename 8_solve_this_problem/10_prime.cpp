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
    string s;

    cin>>s;
    int x=0;
    int y=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]= tolower(s[i]);
            int a=int (s[i]);
          
            y+=a;
        }

        
      else
        {
            s[i]= toupper(s[i]);
             int b=int (s[i]);
             
               y-=b;
        }
    }
 
    bool f=true;
     int c=abs (y);

     for(int i=2;i<c;i++)
     {
        if(c%i==0)
        {
            f=false; 
        }

     }

     if(f)
     {
        cout<<1<<endl;
     }
     else{
        cout<<0<<endl;
     }
return 0;
}
