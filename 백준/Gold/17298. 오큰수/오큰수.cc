#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int N;
stack<int> s;



int main()
{
	cin >> N;
	vector<int> ans(N);
	vector<int> seq(N);
	for (int i = 0; i < N; i++)
		cin >> seq[i];

	for (int i = N - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= seq[i])
			s.pop();

		if (s.empty()) ans[i] = -1;
		else ans[i] = s.top();

		s.push(seq[i]);
	}

	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}