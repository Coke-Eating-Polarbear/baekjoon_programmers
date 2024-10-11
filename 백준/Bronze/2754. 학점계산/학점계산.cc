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



int main()
{
    string input;
    cin >> input;  // 성적 입력

    // 소수점 1자리까지 출력 설정
    cout << fixed << setprecision(1);

    if (input == "A+") {
        cout << 4.3 << endl;
    }
    else if (input == "A0") {
        cout << 4.0 << endl;
    }
    else if (input == "A-") {
        cout << 3.7 << endl;
    }
    else if (input == "B+") {
        cout << 3.3 << endl;
    }
    else if (input == "B0") {
        cout << 3.0 << endl;
    }
    else if (input == "B-") {
        cout << 2.7 << endl;
    }
    else if (input == "C+") {
        cout << 2.3 << endl;
    }
    else if (input == "C0") {
        cout << 2.0 << endl;
    }
    else if (input == "C-") {
        cout << 1.7 << endl;
    }
    else if (input == "D+") {
        cout << 1.3 << endl;
    }
    else if (input == "D0") {
        cout << 1.0 << endl;
    }
    else if (input == "D-") {
        cout << 0.7 << endl;
    }
    else if (input == "F") {
        cout << 0.0 << endl;
    }
}