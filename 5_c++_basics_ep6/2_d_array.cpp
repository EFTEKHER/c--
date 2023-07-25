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
    int n,m;
    cin>>n>>m;

    int a[n][m];


    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }

    }
cout<<endl;

        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
        
return 0;
}
