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

string lowerS(string x)
{
    string arr = "";
    for (int i = 0; i < x.size(); i++)
    {
        arr += tolower(x[i]);
    }
    return arr;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> a;
        bool ef1 = false, ef2 = false, ef3 = false, ef4 = false;
        int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {

            string x, arr;
            cin >> x;
            arr = lowerS(x);
            a.push_back(arr);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 'v')
                {
                    ef1 = true;
                    x1++;
                }
                if (a[i][j] == 'i')
                {
                    ef2 = true;
                    x2++;
                }
                if (a[i][j] == 'k')
                {
                    ef3 = true;
                    x3++;
                }
                if (a[i][j] == 'a')
                {
                    ef4 = true;
                    x4++;
                }
            }
        }

        if (ef1 && ef2 && ef3 && ef4 && x1 == n && x2 == n && x3 == n && x4 == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}