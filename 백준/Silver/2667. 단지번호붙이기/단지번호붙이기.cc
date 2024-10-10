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
int arr[25][25];

bool dfs(int x, int y, int& house)
{

	if (x <= -1 || x >= n || y <= -1 || y >= n)
		return false;
	if (arr[x][y] == 1)
	{
		house++;
		arr[x][y] = 0;
		dfs(x - 1, y, house);
		dfs(x + 1, y, house);
		dfs(x, y - 1,house);
		dfs(x, y + 1,house);
		return true;
	}
	return false;	
}
int main()
{
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = input[j] - '0';
		}
	}
	vector<int> q;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j<n; j++)
		{
			int house = 0;
			if (dfs(i, j, house))
			{
				count++;
				q.push_back(house);
			}
		}
		
	}
	cout << count<<endl;
	int len = q.size();
	sort(q.begin(), q.end());
	for (int i = 0; i <len; i++)
	{
		cout << q[i] << endl;
	}
	return 0;

}