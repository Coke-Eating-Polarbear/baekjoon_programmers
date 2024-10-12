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
vector<vector<bool>> visited;
int dx[4] = { 1, 0, -1, 0 }; // E S W N
int dy[4] = { 0, 1, 0 ,-1 }; // E S W N

int bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;
	while (!q.empty())
	{
		int ex = q.front().first;
		int ey = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = ex + dx[i];
			int ny = ey + dy[i];
			if (nx<0 || nx >= n || ny< 0 || ny >= m)
				continue;
			if (arr[nx][ny] == 0)
				continue;
			if (arr[nx][ny] == 1 && visited[nx][ny] == false)
			{
				arr[nx][ny] = arr[ex][ey] +1;
				visited[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
	return arr[n - 1][m - 1];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n>> m;
	cin.ignore();
	arr.resize(n, vector<int>(m)); // 크기를 입력 후 설정
	visited.resize(n, vector<bool>(m, false)); // 크기를 입력 후 설정
	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);
		
		for (int j = 0; j < m; j++)
		{		
			arr[i][j] = input[j] - '0';
		}
	}
	
	cout << bfs(0, 0);
	return 0;
}