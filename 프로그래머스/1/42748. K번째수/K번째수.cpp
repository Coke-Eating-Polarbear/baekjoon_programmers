#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    int len = commands.size();
    for(int i=0;i < len;i++)
    {
        int a = commands[i][1] - commands[i][0] +1;
        vector<int> temp(a);
        int index = 0;
        for(int j=commands[i][0]-1;j< commands[i][1];j++)
        {
            temp[index] = array[j];
            index ++;
        }
        for(int j=0;j<a;j++)
        {
            for(int k=0;k<a;k++)
            {
                if(temp[j] < temp[k])
                {
                    int b = temp[j];
                    temp[j] = temp[k];
                    temp [k] = b;
                }
            }
        }
        answer.push_back(temp[commands[i][2] -1]);
    }
    return answer;
}