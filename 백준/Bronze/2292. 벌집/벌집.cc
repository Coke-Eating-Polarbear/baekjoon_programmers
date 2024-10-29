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
	unsigned long long int input = 0;
	cin >> input;
    int i = 0;
    for (int sum = 2; sum <= input; i++)
        sum += 6 * i;
    if (input == 1) i = 1;
    cout << i;
	return 0;
}