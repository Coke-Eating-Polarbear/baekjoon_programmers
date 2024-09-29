#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
using namespace std;

int main()
{	
	while (1)
	{
		bool flag = true;
		string temp;
		getline(cin,temp);
		
		if (temp== ".")
			break;
		int len = temp.length();
		stack<char> small;
		for (int i = 0; i < len; i++)
		{
			if (temp[i] == '(')
			{
				small.push('(');
			}
			else if (temp[i] == '[')
			{
				small.push('[');
			}
			else if (temp[i] == ')') 
			{
				if (!small.empty() && small.top() == '(') {
					small.pop();
				}
				else {
					flag = false;
					break;
				}
			}
			else if (temp[i] == ']') 
			{
				if (!small.empty() && small.top() == '[') {
					small.pop();
				}
				else {
					flag = false; 
					break;
				}
			}
		}		
		if (flag&& small.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}

