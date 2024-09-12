#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    int answer = n;
    int len = strlen(control);
    for(int i=0;i<len;i++)
    {
        if(control[i] == 'w')
            answer = answer +1;
        else if(control[i] == 's')
            answer = answer -1;
        else if(control[i] == 'd')
            answer = answer + 10;
        else if(control[i] == 'a')
            answer = answer -10;
    }
    return answer;
}