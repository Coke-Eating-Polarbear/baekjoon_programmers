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

int main()
{
	int n;
	cin >> n;
	vector<string> word;
	string temp;
	unordered_set<string> temps;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		word.push_back(temp);
	}
	sort(word.begin(), word.end(), [](const string& a, const string& b) {
		return a.size() == b.size() ? a < b : a.size() < b.size();
		});
	vector<string> answer;
	for (const auto& w : word) {
		if (temps.find(w) == temps.end()) { // 처음 보는 단어라면
			answer.push_back(w);    // 결과 벡터에 추가
			temps.insert(w);               // 집합에 추가하여 중복 체크
		}
	}
	for (auto& w : answer)
	{
		cout << w << endl;
	}
	return 0;
}