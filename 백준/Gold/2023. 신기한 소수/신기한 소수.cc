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

void numbers(int a, int b, int cur, vector<int>& arr)
{
	if (b == a)
	{
		arr.push_back(cur);
		return;
	}
	for (int i = 1; i <= 9; i++)
	{
		int next = cur * 10 + i;
		if (isPrime(next))
		{
			numbers(a, b + 1, next, arr);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> temp;
	numbers(n, 0, 0, temp);

	for (int a : temp)
		cout << a << endl;
	return 0;
}