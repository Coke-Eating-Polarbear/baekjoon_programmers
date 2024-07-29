#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

unsigned long long solution(int balls, int share) {
    unsigned long long answer = 1;
     for(int i = 0 ; i < share;++i)
    {
        answer = answer * (balls-i) / (i+1);
    }

    return answer;
}