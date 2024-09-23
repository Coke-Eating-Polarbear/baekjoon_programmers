#include <iostream>
#include <queue>
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	while (n--)
	{
        string input;
        getline(cin, input);
        stack<char> VPS;
        bool isVPS = true;

        for (char temp : input)
        {
            if (temp == '(')
            {
                VPS.push(temp);
            }
            else if (temp == ')')
            {
                if (VPS.empty())
                {
                    isVPS = false;
                    break;
                }
                VPS.pop();
            }
        }
        if (isVPS && VPS.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
	}

	return 0;
}