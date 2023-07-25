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
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"YES"<<endl;

    }
    else if(n%3==0)
    {
        cout<<" Divisible by 3"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }
        
return 0;
}
