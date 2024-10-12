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

void bfs(int x, int y)
{
	int result = 1;
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
			if (arr[nx][ny] == 1 && visited[nx][ny] == false)
			{
				arr[nx][ny] = arr[ex][ey] +1;
				visited[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n>> m;
	arr.resize(n, vector<int>(m)); // 크기를 입력 후 설정
	visited.resize(n, vector<bool>(m, false)); // 크기를 입력 후 설정
	int stx, sty;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int input;
			cin >> input;
			if (input == 2)
			{
				stx = i;
				sty = j;
				arr[i][j] = 0;
			}
			else
			{
				arr[i][j] = input;
			}
			

		}
	}
	int count = 0;
	int maxvalue = 0;
	
	bfs(stx, sty);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 1 && visited[i][j] == false)
			{
				cout << -1 << " ";
			}
			else
			{
				cout << arr[i][j] <<" ";
			}
			
		}
		cout << endl;
	}
}