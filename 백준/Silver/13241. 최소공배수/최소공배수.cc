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

int gcd(long long int a, long long  int b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int lcm(long long int a, long long  int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	long long int a, b;
	cin >> a >> b;
	long long int answer;
	answer = gcd(a, b);
	cout << a * b / answer;
	return 0;
}