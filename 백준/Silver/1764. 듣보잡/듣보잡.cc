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
	int n, m;
	cin >> n >> m;
	cin.ignore();
	vector<string> hear(n);
	unordered_set<string> see(m);
	vector<int> index(n);

	int temp = 0;
	for (int i = 0; i < n; i++) 
	{
		getline(cin, hear[i]);
	}
	for (int j = 0; j < m; j++)
	{
		string temp;
		getline(cin, temp);
		see.insert(temp);
	}
	vector<string> answer;
	for (int i = 0; i < n; i++) 
	{
		if (see.find(hear[i]) != see.end())
		{ 
			answer.push_back(hear[i]);
		}
	}
	temp = answer.size();
	cout << temp<<endl;
	sort(answer.begin(), answer.end());
	for (int i = 0; i < temp; i++)
	{
		cout << answer[i]<<endl;
	}

	return 0;
}