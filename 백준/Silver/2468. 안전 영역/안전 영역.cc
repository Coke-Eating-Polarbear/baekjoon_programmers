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
int arr[101][101];

bool visited[101][101] = { false };



bool dfs(int x, int y,int height)
{

	if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || arr[x][y] < height)
		return false;

	visited[x][y] = true;

	dfs(x - 1, y, height);
	dfs(x + 1, y, height);
	dfs(x, y - 1, height);
	dfs(x, y + 1, height);
	return true;

}
int main()
{
	cin >> n;
	int max_height = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int input;
			cin >> input;
			arr[i][j] = input;
			if (arr[i][j] > max_height)
				max_height = arr[i][j];
		}
	}


	vector<int> findmax;
	for (int k = 1; k <= max_height; k++)
	{
		int count = 0;
		for (int a = 0; a < n; a++)
		{
			for (int b = 0; b < n; b++)
			{
				visited[a][b] = false;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (!visited[i][j] && dfs(i, j,k))
				{
					count++;
				}
			}
		}
		findmax.push_back(count);
	}
	int maxvalue = 0;
	for (int i = 0; i < findmax.size(); i++)
	{
		if (maxvalue < findmax[i])
		{
			maxvalue = findmax[i];
		}
	}
	cout << maxvalue <<" ";
	return 0;

}