#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int len = num_list.size();
    sort(num_list.begin(), num_list.end());
    for(int i = 5; i<len;i++)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}