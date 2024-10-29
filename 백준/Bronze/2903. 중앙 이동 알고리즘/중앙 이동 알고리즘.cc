#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <queue>
#include <iomanip>
#include <set>
#include <sstream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int answer = 0;
	int count =2;
	for (int i = 0; i < n; i++)
	{
		count = 2 * count - 1;
	}
	answer = count * count;

	cout << answer;
	return 0;
}