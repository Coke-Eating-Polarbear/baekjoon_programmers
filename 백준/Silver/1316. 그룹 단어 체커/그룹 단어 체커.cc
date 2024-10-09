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

	int count = 0;
	for (int a = 0; a < N; a++)
	{
		vector<int> check(26);
		string input;
		getline(cin, input);
		check[input[0] - 'a']++;
		bool flag = true;
		for (int i = 1; i < input.length(); i++)
		{
			if (input[i - 1] != input[i])
				if (check[input[i] - 'a'] != 0)
				{
					flag = false;
					break;
				}

				check[input[i] - 'a']++;
			
		}
		if (flag)
			count++;
	}
	cout << count;


	return 0;
}