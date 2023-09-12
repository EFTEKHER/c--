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
void increement(int *x)
{
    //(*x)++;
    *x=*x+1;
}     
        
int main()
{int x=10;
    int *p=&x;
    int **q;
    q=&p;
    
    cout<<"x address     "<<&x<<endl;
      
    cout<<"x address by p"<<p<<endl;
     cout<<"x address by q"<<*q<<endl;  
     cout<<"x address by q"<<*q+1<<endl;

     cout<<"x value by p:"<<*p<<endl;
     cout<<"x value by q"<<**q<<endl;  

     int a[10];
     a[0]=1;
     a[1]=2;
     cout<<&a[0]<<endl;
     cout<<*a<<endl;
     cout<<&a[1]<<endl;
     cout<<*(a+1)<<endl;


      int  y=2;
      cout<<y<<endl;
      increement(&y);
           cout<<y<<endl;
             increement(&y);
            cout<<y<<endl;
              increement(&y);
                increement(&y);
                  increement(&y);
                   cout<<y<<endl;
return 0;
}
