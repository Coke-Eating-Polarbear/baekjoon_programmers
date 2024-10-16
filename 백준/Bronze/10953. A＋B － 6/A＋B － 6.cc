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

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		string input;
		getline(cin, input);
		int n = input[0] - '0';
		int m = input[2] - '0';
		cout << n + m << endl;
;	}
	return 0;
}