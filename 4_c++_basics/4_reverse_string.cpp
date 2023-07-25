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
    string str;
    cin>>str;
    string str_rev;

    for(int i=str.size()-1;i>=0;--i)
    {
        str_rev.push_back(str[i]);
    }
    cout<<str_rev<<endl;
        
return 0;
}
