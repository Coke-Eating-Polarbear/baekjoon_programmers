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
	string input;
	getline(cin, input);
	int sum = 0;

	for (int i = 0; i < t; i++)
	{
		sum = sum + int((input[i] - 96) * pow(31, i)) % 1234567891;
	}
	cout << sum;
	return 0;
}