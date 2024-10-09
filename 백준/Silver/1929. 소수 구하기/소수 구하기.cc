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

bool isPrime(int num)
{
	if (num == 1)
		return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	int small = 0;
	int total = 0;
	for (int i = n; i <= m; i++)
	{
		if (isPrime(i))
		{
			cout << i << endl;

		}
	}
	return 0;
}