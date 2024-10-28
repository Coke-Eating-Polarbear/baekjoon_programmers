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
	ios::sync_with_stdio(false);
	cin.tie(0);
	deque<int> answer;
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string input;
		string temp;
		int num = 0;
		getline(cin, input);
		if (input == "pop_front") // pop
		{
			if (answer.empty())
			{
				num = -1;
				printf("%d\n", num);
			}
			else
			{
				printf("%d\n", answer.front());
				answer.pop_front();
			}
		}
		if (input == "pop_back") // pop
		{
			if (answer.empty())
			{
				num = -1;
				printf("%d\n", num);
			}
			else
			{
				printf("%d\n", answer.back());
				answer.pop_back();
			}
		}
		else if (input == "size") // size
		{
			num = answer.size();
			printf("%d\n", num);
		}
		else if (input == "empty")
		{
			if (answer.empty())
			{
				num = 1;
				printf("%d\n", num);
			}
			else
			{
				num = 0;
				printf("%d\n", num);
			}
		}
		else if (input.substr(0, 10) == "push_front")
		{
			int num = stoi(input.substr(11));
			answer.push_front(num);
		}
		else if (input.substr(0, 9) == "push_back")
		{
			int num = stoi(input.substr(10));
			answer.push_back(num);
		}
		else if (input == "front")
		{
			if (answer.empty())
			{
				num = -1;
				printf("%d\n", num);
			}
			else
			{
				num = answer.front();
				printf("%d\n", num);
			}
		}
		else if (input == "back")
		{
			if (answer.empty())
			{
				num = -1;
				printf("%d\n", num);
			}
			else
			{
				num = answer.back();
				printf("%d\n", num);
			}
		}

	}
	return 0;
}