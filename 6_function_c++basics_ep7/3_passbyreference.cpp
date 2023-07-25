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
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


void increement(int &n, int n1)
{
    n++;
    n1++;

}      
        
int main()
{
    int a=8;
    int b=5;
    cout<<a<<" "<<b<<endl;
    increement(a,b);
     cout<<a<<" "<<b<<endl;
         increement(a,b);
     cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
return 0;
}
