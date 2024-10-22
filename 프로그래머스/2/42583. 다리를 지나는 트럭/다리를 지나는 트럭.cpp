#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> input;
    int n = truck_weights.size();
    for(int i = 0 ; i< n ; i++)
    {
        input.push(truck_weights[i]);    
    }
    vector<pair<int, int>> bridge;
    int count = 1;
    while (!input.empty() || !bridge.empty())
    {
        count++;
        int sum = 0;
        int temp = input.empty() ? 0 : input.front();
        for (int i = 0; i < bridge.size(); i++)
        {
            sum = sum + bridge[i].first;
        }
        if (!input.empty() && sum + temp <= weight)
        {
            bridge.push_back(make_pair(temp, 0));
            input.pop();
        }

        int len = bridge.size();
        for (int i = 0; i < len; i++)
        {
            bridge[i].second++;
        }

        if (!bridge.empty() && bridge[0].second >= bridge_length)
            bridge.erase(bridge.begin());
    }
    return count;
}