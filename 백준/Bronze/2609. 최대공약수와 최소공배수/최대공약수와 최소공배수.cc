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

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main()
{
	int n, m;
	cin >> n >>m;
	int small;
	if (n > m)
		small = gcd(n, m);
	else if (n < m)
		small = gcd(m, n);
	else
		small = n;
	int index = 1;
	int nx = n / small;
	int mx = m / small;
	cout << small << endl << small * nx * mx;
	return 0;
}