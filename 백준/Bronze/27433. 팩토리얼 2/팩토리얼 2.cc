#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <queue>
#include <iomanip>
using namespace std;


long long int factorial(int a)
{
    long long int sum;
    if (a == 1 || a==0)
        return 1;
    return a * factorial(a - 1);

}
int main()
{
    long long int n, count;
    scanf("%d", &n);
    count = factorial(n);
    cout << count;
    return 0;
}