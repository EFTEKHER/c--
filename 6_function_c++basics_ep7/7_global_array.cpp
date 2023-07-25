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
const int N=1e5+10;
int a[N];
const int x=1e3+10;
int b[x][x];
using namespace std;
void func()
{
    b[0][0]=5;
}     
        
int main()
{
         b[0][0]=7;
    cout<<b[0][0]<<endl;
    func();
     cout<<b[0][0]<<endl;
return 0;
}
