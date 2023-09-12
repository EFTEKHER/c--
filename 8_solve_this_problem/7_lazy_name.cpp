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
 vector <int> p;     
        
int main()
{
    int a,b,c;
    cin>> a>>b>>c;
    int cth_number=0;
    for(int i=2 ; c!=0;i++)
    {
        if(i%a==0 || i%b==0)
        {
            c--;
           cth_number=i;
        }
    }
   
      
// cout<<"cth_number :"<<cth_number<<endl;
int lcm;
for(int i=1;i<=a*b;i++)
{
if(i%a==0 && i%b==0)
{
lcm=i;
break;
}
}
int step;

if(cth_number %a==0 && cth_number%b==0)
{
    step=lcm;
} 

else if (cth_number%a==0)
{
   step=a; 
}
else{
    step=b;
}

for(int i=cth_number; i>=0; i=i-step)
{
    cout<<i<<" ";
}
return 0;
}
