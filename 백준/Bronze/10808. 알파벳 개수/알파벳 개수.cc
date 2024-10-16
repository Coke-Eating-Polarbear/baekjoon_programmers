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
	string input;
	vector<int> count(26,0);
	getline(cin, input);
	int len = input.size();
	for (int i = 0; i < len; i++)
	{
		count[input[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << count[i] << " ";
	}

	return 0;
}