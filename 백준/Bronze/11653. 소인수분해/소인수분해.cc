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
	int n;
	int index = 2;
	cin >> n;
	if (n == 1)
		return 0;
	else
	{
		while (n>1)
		{
			if (n % index == 0)
			{
				cout << index << endl;
				n = n / index;
			}
			else if (n % index != 0)
				index++;
		}
	}
	return 0;
}