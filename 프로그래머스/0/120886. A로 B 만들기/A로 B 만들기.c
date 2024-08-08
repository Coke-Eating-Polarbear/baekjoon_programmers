#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 1;
    int len = strlen(before);
    char a[len];
    char b[len];
    for(int i=0;i<len;i++)
    {
        a[i] = after[i];
        b[i] = before[i];
    }
    for(int j=0;j<len;j++)
    {
        for(int k=0;k<len;k++)
        {
            if(a[j] == b[k])
            {
                b[k] = 'A';
                break;
            }
        }
    }
    for(int x=0;x<len;x++)
    {
        printf("%c",a[x]);
        if(b[x] != 'A')
        {
            answer =0;
            break;
        }
    }
    return answer;
}