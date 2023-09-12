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
const int M=1e9+7;
const int N=1e5+10;      
  ull arr[N];       
int main()
{
    arr[1]=arr[0]=1;
 for(int i=2; i<=N;i++) 
 {
    arr[i]=(arr[i-1]*i)%M;
 } 

 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
 }      
return 0;
}
