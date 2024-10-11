#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <queue>
#include <iomanip>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    unordered_set<string> narr(n);
    vector<string> marr(m);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string input;
        getline(cin, input);
        narr.insert(input);
    }
    for (int i = 0 ; i < m; i++)
    {
        string input;
        getline(cin, input);
        marr[i] = input;
    }
    for (int i = 0; i < m; i++)
    {
        if (narr.find(marr[i])!= narr.end())
            count++;
    }
    cout << count;
}