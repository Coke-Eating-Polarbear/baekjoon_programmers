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
	queue<int> temp;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		temp.push(i);
	}
	while (!temp.empty())
	{
		int x;
		x = temp.front();
		temp.pop();
		answer.push(x);
		if (temp.empty())
			break;
		x = temp.front();
		temp.pop();
		temp.push(x);
		
	}
	for (int i = 0; i < n; i++)
	{
		int a = answer.front();
		cout << a <<" ";
		answer.pop();
	}
	return 0;
}