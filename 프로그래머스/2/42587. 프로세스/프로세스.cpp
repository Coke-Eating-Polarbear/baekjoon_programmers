#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    
    int n = priorities.size();
    vector<int> answer(n, -1);
    int ind = 0;
    int cnt = 1;
    while (answer[location] == -1)
    {
        int max = 0;
        for(int i = 0 ; i<n;i++)
        {
            if(max< priorities[i])
            {
                max = priorities[i];
            }
        }
        if (priorities[ind] == max)
        {
            answer[ind] = cnt;
            cnt++;
            priorities[ind] = -1;
        }
        ind++;
        ind = ind % n ;
    }
    
    return answer[location];
}