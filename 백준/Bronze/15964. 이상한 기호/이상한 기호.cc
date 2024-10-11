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
    int answer;
    int n, m;
    cin >> n >> m;
    answer = (n + m) * (n - m);

    cout << answer << endl;
    return 0;


}
