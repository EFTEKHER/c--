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
//array declare 
 void func(int a[][20])
{
a[0][0]=9;
}     
        
int main()
{
    int a[10][20];
    a[0][0]=7;
    cout<<a[0][0]<<endl;
    func(a);
     cout<<a[0][0]<<endl;
        
return 0;
}
