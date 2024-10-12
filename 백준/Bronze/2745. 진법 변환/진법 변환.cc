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
    string input;
    int n;
    cin >> input >> n;
    int len = input.size();
    long long int answer = 0;
    int temp;
    int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            temp = input[i] - 55; 
        }
        else
        {
            temp = input[i] - '0';  
        }
        answer = answer + temp * pow(n, len - 1 - i);
    }
    cout << answer;
    return 0;
}