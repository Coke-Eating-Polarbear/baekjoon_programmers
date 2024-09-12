#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int temp1 = 0;
    int temp2 = 1;
    for(int i=0;i<num_list_len;i++)
    {
        temp1 = temp1 + num_list[i];
        temp2 = temp2 * num_list[i];
    }
    temp1 = temp1 * temp1;
    if(temp1>temp2)
        answer = 1;
    else
        answer = 0;
    return answer;
}