#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
using namespace std;



int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c)
	{
		cout << a <<" ";
		if (b < c)
			cout << b <<" "<<c;
		else
			cout << c << " " << b;
	}
	else if (b < c && b < a)
	{
		cout << b << " ";
		if (a < c)
			cout << a << " " << c;
		else
			cout << c << " " << a;
	}
	else
	{
		cout << c << " ";
		if (a < b)
			cout << a << " " << b;
		else
			cout << b << " " << a;
	}
}