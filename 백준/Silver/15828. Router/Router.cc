#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	queue<int> answer;
	int n;
	cin >> n;
	
	while (1)
	{
		int input;
		cin >> input;
		if (input == -1)
			break;
		if (input == 0)
		{
			if (!answer.empty()) 
				answer.pop();
		}
		else 
		{
			if (answer.size() < n)
				answer.push(input);
		}
	}
	if (answer.empty())
		cout << "empty";
	else
	{
		int len = answer.size();
		for (int i = 0; i < len; i++)
		{
			int x;
			x = answer.front();
			answer.pop();
			cout << x << " ";
		}
	}

	return 0;
}