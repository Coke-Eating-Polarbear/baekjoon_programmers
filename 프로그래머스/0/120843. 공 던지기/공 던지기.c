#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    int index =0;
    int temp=0;
    for(int i=0;i<k;i++)
    {
        answer = numbers[index];
        index = index+2;
        if(index>=numbers_len)
            index=index-numbers_len;
    }
    return answer;
}