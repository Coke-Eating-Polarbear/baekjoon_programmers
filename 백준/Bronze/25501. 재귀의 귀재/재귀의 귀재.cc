#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;


int recursion(const char* s, int l, int r, int& re_count) {
    re_count++;
    if (l >= r) 
        return 1;
    else if (s[l] != s[r]) 
        return 0;
    else 
        return recursion(s, l + 1, r - 1,re_count);
}

int isPalindrome(const char* s,int& count) {
    return recursion(s, 0, strlen(s) - 1,count);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        char input[1001];
        cin.getline(input,1001);
        int re_count = 0;
        int result = isPalindrome(input, re_count);
        cout << result << " " <<re_count<< endl;
    }
}