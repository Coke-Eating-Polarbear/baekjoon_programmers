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

void bfs(int x)
{
	queue<int>q;
	q.push(x);
	visited[x] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < arr[x].size(); i++)
		{
			int y = arr[x][i];
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
}
void dfs(int x)
{
	visited[x] = true;
	cout << x << " ";
	for (int i = 0; i < arr[x].size(); i++)
	{
		int y = arr[x][i];
		if (!visited[y])
			dfs(y);
	}
}
int main()
{

	int m,v;
	cin >> n >> m >> v;
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
	dfs(v);
	fill(begin(visited), end(visited), false);

	cout << endl;
	bfs(v);
	
	return 0;

}