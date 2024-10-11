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

void move(int n, int start, int temp, int dest)
{
    if (n == 1)
        printf("%d %d\n", start, dest);
    else
    {
        move(n - 1, start, dest, temp);
        printf("%d %d\n", start, dest);
        move(n - 1, temp, start, dest);
    }
}


int main()
{
    int n;
    cin >> n;
    
    int m = (1 << n) -1;
    cout << m << endl;
    move(n, 1, 2, 3);
    return 0;
}