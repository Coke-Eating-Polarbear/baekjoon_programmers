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
#include <set>
using namespace std;

int main() {
    string stringinput, bomb;
    cin >> stringinput >> bomb;

    vector<char> stack;
    int bomb_length = bomb.length();

    for (char c : stringinput) {
        stack.push_back(c);

        // 스택의 마지막 부분이 bomb와 일치하면 해당 부분을 제거
        if (stack.size() >= bomb_length && string(stack.end() - bomb_length, stack.end()) == bomb) {
            for (int i = 0; i < bomb_length; ++i) {
                stack.pop_back();
            }
        }
    }

    if (stack.empty()) {
        cout << "FRULA" << endl;
    }
    else {
        for (char c : stack) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
