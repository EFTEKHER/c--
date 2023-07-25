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
void printHello()
{
    cout<<"Hello world";
}

int sum(int a,int b)
{
    return a+b;
}
int digit_sum(int n)
{
    int digit_sum=0;
    while(n)
    {
        digit_sum=digit_sum+n%10;
        n=n/10;
    }
    return digit_sum;
}      
int main()
{

    int a,b;
    cin>>a>>b;
    int digit_sum1=digit_sum(a);
    int digit_sum2=digit_sum(b);
    cout<<digit_sum1+digit_sum2<<endl;
    return 0;
      printHello();  
     cout<< sum(1,1);


 //compiler means code execution sucessfully completed
}
