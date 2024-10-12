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

int n, m;
vector<vector<int>> arr;
int dx[8] = { 1, 0, -1, 0 ,1, 1, -1, -1}; // E S W N
int dy[8] = { 0, 1, 0 ,-1, -1, 1, -1, 1 }; // E S W N

bool bfs(int x, int y)
{
	if (x < 0 || x >= n || y < 0 || y >= m)
		return false;
	if (arr[x][y] == 1)
	{
		arr[x][y] = 0;
		for (int i = 0; i < 8; i++)
		{
			bfs(x+dx[i],y+dy[i] );
		}		
		return true;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (1)
	{
		cin >> m >> n;
		if (n == 0 && m == 0)
			break;
		arr.clear();
		arr.resize(n, vector<int>(m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];		
			}
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (bfs(i, j))
					count++;
			}
		}
		cout << count <<endl;
	}

	return 0;
}