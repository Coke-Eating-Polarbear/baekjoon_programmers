#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool comp(int i, int j)
{
    return j < i;
}

int main()
{
    string a;
    getline(cin, a);
    sort(a.begin(), a.end(),comp);
    cout << a;
    return 0;
}