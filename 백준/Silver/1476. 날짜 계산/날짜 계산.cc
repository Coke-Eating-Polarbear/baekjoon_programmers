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
	// (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
	int E, S, M;
	cin >> E >> S >> M;
	int x = 1;
	while (1)
	{
		if (((x - E) % 15 == 0) && ((x - S) % 28 == 0) && ((x - M) % 19 == 0))
			break;
		x++;
	}
	cout << x;
	return 0;
}