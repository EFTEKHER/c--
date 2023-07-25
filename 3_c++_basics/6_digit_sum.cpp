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
    int digit_sum=0;
    while(n>0)
    {
        int last_digit=n%10;
        digit_sum+=last_digit;
        n=n/10;
    }
    cout<<digit_sum<<endl;
    }
        
return 0;
}
