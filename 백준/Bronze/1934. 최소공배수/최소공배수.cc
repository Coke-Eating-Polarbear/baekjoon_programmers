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

int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}

int main()
{
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int small;
		cin >> n >> m;
		if (n > m)
			small = gcd(n, m);
		else if (n < m)
			small = gcd(m, n);
		else
			small = n;
		int nx = n / small;
		int ny = m / small;
		cout << nx * ny * small <<endl;
	}
	return 0;
}