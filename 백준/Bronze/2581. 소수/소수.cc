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
			if (total == 0)
				small = i;
			total = total + i;
		}
	}
	if (total == 0)
		cout << -1;
	else
		cout << total << endl << small;
	return 0;
}