#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    int len = rny_string.size();
    for(int i =0;i<len;i++)
    {
        if(rny_string[i] == 'm')
            answer = answer + "rn";
        else
            answer = answer + rny_string[i];
    }
    return answer;
}