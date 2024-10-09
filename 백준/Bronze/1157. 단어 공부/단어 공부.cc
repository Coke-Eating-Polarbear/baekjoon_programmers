#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;



int main()
{
	string input;
	vector<int> count(26);
	getline(cin, input);
	int len = input.length();
	for (int i = 0; i < len; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			count[input[i] - 'A']++;
		else
			count[input[i] - 'a']++;
	}
	int max = 0;
	int index = 0;
	bool flag = false;
	for (int i = 0; i < 26; i++)
	{
		if (count[i] > max)
		{
			index = i;
			max = count[i];
			flag = false;
		}
		else if (count[i] == max)
		{
			flag = true;
		}
	}
	if (flag)
		cout << "?";
	else
		cout <<char('A' + index);

	return 0;
}