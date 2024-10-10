#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;

int pibonacchi(int a)
{
    int x = 0, y = 1;
    int sum;
    if (a == 0)
        return x;
    else if (a == 1)
        return y;
    else {
        for (int i = 2; i <= a; i++)
        {
            sum = x + y;
            x = y;
            y = sum;
        }

        return y;


    }
}
int main()
{
    int n, count;
    scanf("%d", &n);
    count = pibonacchi(n);
    printf("%d", count);
    return 0;
}