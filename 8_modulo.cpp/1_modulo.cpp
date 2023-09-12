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
// using modulo M where we cannot store big number

int main()
{
    int n;
    cin >> n;
    long long fact = 1, h = 47;
    long long M = 1e9 + 7;

    for (int i = 2; i <= n; i++)
    {
        fact = (fact * i) % M;
        // fact = (fact * i) % h;
    }
    cout << fact << endl;
    return 0;
}
