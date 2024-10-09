#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;



int main()
{
	int N;
	cin >> N;
	cin.ignore();
	for (int a = 0; a < N; a++)
	{
		string input;
		getline(cin, input);
		int total = 0;
		int index = 1;
		int count = 0;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == 'O')
			{
				count++;
			}
			if (input[i] == 'X' || i == input.length() - 1)
			{
				for (int j = 0; j < count; j++)
				{
					total = total + j + 1;
				}
				count = 0;
			}
		}
		cout << total<<endl;
	}


	return 0;
}