#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> input(n);
        long long int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> input[j];
            input[j] = abs(input[j]);
        }
        for (int a = 0; a < n - 1; a++)
        {
            for (int b = a + 1; b < n; b++)
            {
                sum = sum + gcd(input[a], input[b]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}