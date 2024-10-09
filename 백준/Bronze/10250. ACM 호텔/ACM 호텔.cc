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
	int n;
	int h, w, c;
	int count;
	int room;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h >> w >> c;
		room = c % h;
		if (room == 0)
		{
			room = h;
			count = c / h;
		}
		else
		{
			count = c / h + 1;
		}
		cout << room * 100 + count << endl;
	}


	return 0;
}