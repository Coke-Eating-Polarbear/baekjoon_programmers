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
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int p = 0; p < T; p++)
    {
        string commandinput;
        getline(cin, commandinput);
        int num;
        cin >> num;
        cin.ignore();
        string input;
        getline(cin, input);
        deque<int> number;
        stringstream ss(input);
        string temp;
        bool errorflag = false;
        bool flag = false;
        input.erase(remove(input.begin(), input.end(), '['), input.end());
        input.erase(remove(input.begin(), input.end(), ']'), input.end());
        if (num > 0) 
        {  
            stringstream ss(input);
            string temp;
            while (getline(ss, temp, ',')) 
            {
                if (!temp.empty()) 
                {  
                    number.push_back(stoi(temp));
                }
            }
        }

        int len = commandinput.size();
        for (int i = 0; i < len; i++)
        {
            if (commandinput[i] == 'R')
            {
                flag = !flag;
                
            }
            else if (commandinput[i] == 'D')
            {
                if (number.empty())
                {
                    cout << "error" <<endl;
                    errorflag = true;
                    break;
                }
                else if(!number.empty() && flag)
                {
                    number.pop_back();
                }
                else if (!number.empty() && !flag)
                {
                    number.pop_front();
                }
            }
        }
        if (errorflag)
            continue;
        cout << "[";
        if (!flag)
        {
            for (int i = 0; i < number.size(); i++)
            {
                if (i == number.size() - 1)
                {
                    cout << number[i];
                }
                else
                {
                    cout << number[i] << ",";
                }
            }
        }
        else
        {            
            for (int i = number.size()-1; i >=0; i--)
            {
                if (i == 0)
                {
                    cout << number[i];
                }
                else
                {
                    cout << number[i] << ",";
                }
            }

        }

        cout << "]"<<endl;
    }
    return 0;
}
