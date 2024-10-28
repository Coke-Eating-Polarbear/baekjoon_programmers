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
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
