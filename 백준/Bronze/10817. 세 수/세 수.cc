#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;



int main()
{
	vector<int> input(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	cout << input[1];
	return 0;
}