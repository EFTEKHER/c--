/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
           for(int i=0; i<s.size(); i++)
           {
            s[i]=upper(s[i]);
           }
        cout << s << endl;
    }

    return 0;
}
