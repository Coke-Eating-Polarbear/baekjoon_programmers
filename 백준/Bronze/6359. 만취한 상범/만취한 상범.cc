#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector<bool> door(n,true);
		for (int step = 1; step <= n; step++)
		{
			for (int j = step - 1; j < n; j += step)
			{
				door[j] = !door[j];
			}
		}
		int count = 0;
		for (int j = 0; j < n; j++)
			if (door[j] == false)
				count++;
		cout << count<<endl;
	}
}