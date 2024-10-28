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

	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	vector<int> result;
	int i = 0, j = 0;

	while (i < n && j < m) {
		if (a[i] < b[j]) {
			result.push_back(a[i++]);
		}
		else {
			result.push_back(b[j++]);
		}
	}
	while (i < n) {
		result.push_back(a[i++]);
	}
	while (j < m) {
		result.push_back(b[j++]);
	}
	for (int k = 0; k < result.size(); k++) {
		cout << result[k] << " ";
	}
	return 0;
}