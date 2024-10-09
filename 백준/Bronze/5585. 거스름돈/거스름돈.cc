#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
using namespace std;



int main()
{
	int money;
	int count = 0;
	cin >> money;
	money = 1000 - money;
	int exchange[6] = { 500,100,50,10,5,1 };
	for (int i = 0; i < 6; i++)
	{
		count = count + money / exchange[i];
		money = money % exchange[i];
	}
	cout << count;
	return 0;
}