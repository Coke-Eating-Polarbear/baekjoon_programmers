#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <queue>
using namespace std;

int n,m;
vector<vector<int>> arr;
vector<bool> visited;

void dfs(int x)
{
	visited[x] = true;
	for (int i = 0; i < arr[x].size(); i++)
	{
		int y = arr[x][i];
		if (!visited[y])
			dfs(y);
	}
}
int main()
{

		int count = 0;
		int k;

		cin >> n >> m;
		arr.resize(n + 1);
		visited.resize(n + 1, false);
		for (int i = 0; i < m; i++)
		{
			int left, right;
			cin >> left >> right;
			arr[left].push_back(right);
			arr[right].push_back(left);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				dfs(i);
				count++; 
			}
		}

		cout << count << endl;
	
	return 0;
}