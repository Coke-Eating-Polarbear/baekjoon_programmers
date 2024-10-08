#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a= 0, b= 0, c= 0;
	int t;
	cin >> t;
	a = t / 300;
	t = t % 300;
	b = t / 60;
	t = t % 60;
	c = t / 10;
	t = t % 10;
	if (t != 0)
	{
		cout << -1;
		return 0;	
	}
	else
	{
		cout << a << " " << b << " " << c;
	}
}