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

int main() {
    int n, w, l;
    cin >> n >> w >> l;
    queue<int> input;
    vector<pair<int, int>> bridge;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        input.push(temp);
    }
    int count = 1;
    while (!input.empty() || !bridge.empty())
    {
        count++;
        int sum = 0;
        int temp = input.empty() ? 0 : input.front();
        for (int i = 0; i < bridge.size(); i++)
        {
            sum = sum + bridge[i].first;
        }
        if (!input.empty() && sum + temp <= l)
        {
            bridge.push_back(make_pair(temp, 0));
            input.pop();
        }

        int len = bridge.size();
        for (int i = 0; i < len; i++)
        {
            bridge[i].second++;
        }

        if (!bridge.empty() && bridge[0].second >= w)
            bridge.erase(bridge.begin());
    }
    cout << count;
    return 0;
}
