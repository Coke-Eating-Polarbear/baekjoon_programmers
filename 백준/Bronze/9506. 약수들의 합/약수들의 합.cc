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
	while (1)
	{
		int n;
		cin >> n;
		if (n == -1)
			break;
		int sum = 0;
		vector<int> temp(n);
		int index = 0;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				temp[index] = i;
				sum = sum + i;
				index++;
			}
		}
		if (sum != n)
			cout << n << " is NOT perfect.";
		else
		{
			cout << n << " = " << 1;
			for (int i = 1; i < index; i++)
			{
				cout << " + " << temp[i];
			}
		}
		cout << endl;
	}
	return 0;
}