/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/

//array 
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
//array pass by reference 

void fun(int a[])
{
a[0]=5;
}     
        
int main()
{
    int a[10];
    a[0]=7;
    cout<<a[0]<<endl;
    fun(a);
     cout<<a[0]<<endl;
        
return 0;
}
