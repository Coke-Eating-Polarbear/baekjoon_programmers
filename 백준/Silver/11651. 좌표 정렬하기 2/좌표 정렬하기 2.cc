#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> input(n);
	for (int i = 0; i < n; i++)
	{
		int first, second;
		scanf("%d %d", &first, &second);
		input[i] = make_pair(first, second);
	}
	sort(input.begin(), input.end(),cmp );
		
	for (int i = 0; i < n; i++)
		printf("%d %d\n", input[i].first, input[i].second);
	return 0;
}