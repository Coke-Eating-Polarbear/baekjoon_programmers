#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(rsp);
    char* answer = (char*)malloc(len);
    int array[100];
    int index = 0;
    printf("%d",rsp[1]);
    for(int i = 0;i<len;i++)
    {
        if(rsp[i] == 48)
            answer[i] = 53;
        else if(rsp[i] == 50)
            answer[i] = 48;
        else
            answer[i] = 50;
        index++;
    }
    answer[len] = '\0';
    return answer;
}