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

int n,m;
vector<vector<int>>arr;

bool dfs(int x, int y)
{

	if (x <= -1 || x >= n || y <= -1 || y >= m)
		return false;
	if (arr[x][y] == 1)
	{
		arr[x][y] = 0;
		dfs(x - 1, y);
		dfs(x + 1, y);
		dfs(x, y - 1);
		dfs(x, y + 1);
		return true;
	}
	return false;	
}
int main()
{
	int t;
	cin >> t;

	for (int x = 0; x < t; x++)
	{
		int count = 0;
		int k;

		cin >> n>>m>>k;
		arr.assign(n, vector<int>(m,0));
		for (int i = 0; i < k; i++)
		{
			int left, right;
			cin >> left >> right;
			arr[left][right] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (dfs(i, j))
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}


	return 0;

}