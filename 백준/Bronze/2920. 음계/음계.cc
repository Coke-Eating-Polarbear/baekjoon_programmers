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
	string n;
	getline(cin, n);
	if (n == "1 2 3 4 5 6 7 8")
		cout << "ascending";
	else if (n == "8 7 6 5 4 3 2 1")
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}