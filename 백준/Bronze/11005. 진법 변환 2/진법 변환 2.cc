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
    int input;
    int n;
    cin >> input >> n;
    vector<int> answer;
    while (input != 0)
    {
        int temp;
        temp = input % n;
        if (temp > 9)
        {
            answer.push_back(char(temp + 55));
        }
        else
        {
            answer.push_back(temp);
        }
        input /= n;
    }
    for (int i = answer.size()-1; i >= 0; i--)
    {
        if (answer[i] > 9)
            cout << char(answer[i]);
        else
            cout << answer[i];
    }
    return 0;
}