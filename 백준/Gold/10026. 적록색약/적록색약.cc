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
char arr[101][101];

bool visited[101][101] = { false };

bool dfs(int x, int y, char color)
{

	if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || arr[x][y] != color)
		return false;

	visited[x][y] = true;

	dfs(x - 1, y,color);
	dfs(x + 1, y, color);
	dfs(x, y - 1,color);
	dfs(x, y + 1,color);
	return true;

}
int main()
{
	char color;

	bool flag = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = input[j];
		}
	}
	for (int z = 0; z < 2; z++)
	{
		int count = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				visited[i][j] = false;
			}
		}

		if (flag)
		{
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (arr[i][j] == 'G')
						arr[i][j] = 'R';
				}
			}
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				color = arr[i][j];
				if (!visited[i][j] && dfs(i, j, color))
				{
					count++;
				}
			}
		}
		flag = true;
		cout << count <<" ";
	}


	


	return 0;

}