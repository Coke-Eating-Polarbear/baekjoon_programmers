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
    float answer = 0;
    float numsum = 0;
    cout << fixed;
    cout.precision(6);
    for (int i = 0; i < 20; i++)
    {
        string input;
        float num;
        string grade;
        float temp = 0.0;
        cin >> input >> num >> grade;
        if (grade == "A+") {
            temp = 4.5;
        }
        else if (grade == "A0") {
            temp = 4.0;
        }
        else if (grade == "B+") {
            temp = 3.5;
        }
        else if (grade == "B0") {
            temp = 3.0;
        }
        else if (grade == "C+") {
            temp = 2.5;
        }
        else if (grade == "C0") {
            temp = 2.0;
        }
        else if (grade == "D+") {
            temp = 1.5;
        }
        else if (grade == "D0") {
            temp = 1.0;
        }
        else if (grade == "F") {
            temp = 0.0;
        }
        if (grade == "P")
        {
            continue;
        }
        numsum = numsum + num;
        answer = answer + (temp * num);
    }
    cout << (answer / numsum);

    return 0;
}