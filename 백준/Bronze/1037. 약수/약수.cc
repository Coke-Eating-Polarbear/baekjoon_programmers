#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> temp(n);
	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
	}
	sort(temp.begin(), temp.end());
	cout << temp[0] * temp[n - 1];
	return 0;
}