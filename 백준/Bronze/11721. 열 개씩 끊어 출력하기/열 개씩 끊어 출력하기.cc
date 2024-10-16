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
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	int len = input.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		cout << input[i];
		count++;
		if (count == 10)
		{
			cout << endl;
			count = 0;
		}
		
	}
	return 0;
}