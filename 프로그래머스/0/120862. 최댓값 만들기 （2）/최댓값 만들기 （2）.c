#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = -99999999999;
    int cal;
    for(int i=0;i<numbers_len;i++)
    {
        for(int j=0;j<numbers_len;j++)
        {
            if(i==j)
                continue;
            if(numbers[i]*numbers[j]>answer)
                answer = numbers[i]*numbers[j];
        }
    }
    return answer;
}