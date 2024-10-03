#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, int> gemMap;

vector<int> solution(vector<string> gems) {
    int start = 0, end = 0;
    vector<int> answer(2);
    
    for (int i = 0; i < gems.size(); i++) {
        if (gemMap.find(gems[i]) == gemMap.end()) 
        {
            gemMap[gems[i]] = i;
            end = i;
            answer = { start + 1, end + 1 };
        } 
        else 
        {
            gemMap[gems[i]] = i;
            end = i;
            if (gems[start] == gems[i])
            {                    
                int minIndex = 999999;                    
                for (const auto& entry : gemMap) 
                {
                    minIndex = min(minIndex, entry.second);
                }
                start = minIndex == 999999 ? 0 : minIndex;
                if (answer[1] - answer[0] > end - start) 
                {
                    answer = { start + 1, end + 1 };
                }
            }
        }
    }    
    return answer;
}