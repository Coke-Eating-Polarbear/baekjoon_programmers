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
#include <set>
#include <sstream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> input;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
            input.push_back(i);
    }
    if (input.size() == 0 || input.size()<k)
        cout << 0;
    else
        cout << input[k-1];
    return 0;
}