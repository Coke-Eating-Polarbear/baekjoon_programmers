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
using namespace std;

int main() {
    string input;
    vector<string> answer;
    
    getline(cin, input);
    int len = input.size();
    for (int i = 0; i < len; i++)
    {
        answer.push_back(input.substr(i));
    }
    sort(answer.begin(), answer.end());
    for (const string& ans : answer)
    {
        cout << ans << endl;
    }
    return 0;
}
