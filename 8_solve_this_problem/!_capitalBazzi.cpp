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
#include<cstring>
using namespace std;
void printWords(string str)
{
    // word variable to store word
    string word;
 
    // making a string stream
    stringstream iss(str);
 
    // Read and print each word.
    while (iss >> word)
        cout << word << endl;
}      
        
int main()
{

    string s,str="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        str+=toupper(s[i]);
    }


 printWords(str);


        
return 0;
}
