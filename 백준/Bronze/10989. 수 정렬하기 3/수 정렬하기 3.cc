#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;



int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10001] = { 0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[temp]++;
    }
    for (int i = 0; i <= 10000; i++)
    {
        while (arr[i]--) {
            printf("%d\n", i);
        }
    }
    return 0;
}