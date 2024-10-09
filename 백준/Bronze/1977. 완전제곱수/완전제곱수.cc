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
	int n, m;
	cin >> n >>m;
	n = ceil(sqrt(n));
	m = floor(sqrt(m));
	vector<int> arr(m-n+1);
	int index = 0;
	for (int i = n; i <= m; i++)
	{
		arr[index] = i*i;
		index++;
	}
	int total = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		total = total + arr[i];
	}
	if (total == 0)
	{
		cout << -1;
		return 0;
	}
	else
	{
		cout << total << endl << arr[0];
	}

	return 0;
}