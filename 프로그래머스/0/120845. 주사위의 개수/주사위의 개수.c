#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 1;
    answer = (box[0]/n) * (box[1]/n) * (box[2]/n);
    return answer;
}