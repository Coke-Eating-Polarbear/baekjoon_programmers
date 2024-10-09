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
	int a, b, c, d, e, f;
	cin >> a>> b>> c>> d>> e>> f;
	int D = a * e - b * d;

	int x = (c * e - b * f) / D;
	int y = (a * f - c * d) / D;
	cout << x << " " << y;
	return 0;
}