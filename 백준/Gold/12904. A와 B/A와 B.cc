#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;



int main()
{
	string S;
	string T;
	getline(cin, S);
	getline(cin, T);
	int slen = S.length();
	int tlen = T.length();

	while (1)
	{
		tlen = T.length();
		if (slen == tlen)
			break;
		if (T[T.length() - 1] == 'A')
			T.pop_back();
		else
		{
			T.pop_back();
			reverse(T.begin(), T.end());
		}
	}
	if (S == T)
		cout << 1;
	else
		cout << 0;
	return 0;
}