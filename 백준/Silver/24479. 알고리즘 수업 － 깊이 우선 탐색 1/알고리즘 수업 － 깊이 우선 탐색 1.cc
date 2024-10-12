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

int n, m, r;
vector<set<int>> arr;
vector<bool> visited;
vector<int> visit_order;
int order = 1;

void dfs(int x)
{
	visited[x] = true;
	visit_order[x] = order++;
	for (auto y : arr[x])
	{
		if (!visited[y])
		{
			dfs(y);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	scanf("%d %d %d", &n, &m, &r);
	arr.resize(n + 1);
	visited.resize(n + 1, false);
	visit_order.resize(n + 1, 0);
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a].insert(b);
		arr[b].insert(a);
	}
	dfs(r);

	for (int i = 1; i <= n; ++i) 
	{
		printf("%d\n", visit_order[i]);
	}

}