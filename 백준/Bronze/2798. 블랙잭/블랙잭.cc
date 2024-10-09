#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> input(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> input[i];
	}
	int index = 0;
	vector<int> values(n*n*n);
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				for (int k = 0; k < n; k++)
				{
					if (i != k && j != k)
					{
						sum = input[i] + input[j] + input[k];
						values[index] = sum;
						index++;
					}
				}
			}
		}
	}
	int max = 0;
	for (int i = 0; i < values.size(); i++)
	{
		if (values[i]<=m && values[i] > max)
			max = values[i];
	}
	cout << max;
	return 0;
}