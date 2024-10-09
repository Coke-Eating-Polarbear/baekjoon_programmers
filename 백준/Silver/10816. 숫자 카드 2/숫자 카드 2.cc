#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main()
{
    int n, m;
    scanf("%d", &n);
    unordered_map<int, int> card_count;
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        card_count[value]++;
    }

    scanf("%d", &m);
    vector<int> inputm(m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &inputm[i]);
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", card_count[inputm[i]]);
    }
    printf("\n");

    return 0;
}