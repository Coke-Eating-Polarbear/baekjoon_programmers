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
using namespace std;

int n;

vector<vector<int>> arr;
vector<bool> visited;

void dfs(int x, int& count)
{
	count++;
	visited[x] = true;
	for (int i = 0; i < arr[x].size(); i++)
	{
		int y = arr[x][i];
		if (!visited[y])
			dfs(y, count);
	}
}
int main()
{
	int count = -1;
	int m;
	cin >> n >> m;
	arr.resize(n + 1);
	visited.resize(n + 1, false);
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 1; i <= n; ++i) {
		sort(arr[i].begin(), arr[i].end());
	}
	dfs(1, count);
	cout << count;
	
	return 0;

}