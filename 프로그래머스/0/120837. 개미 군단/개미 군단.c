#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    answer = hp/5;
    hp = hp%5;
    answer = answer + hp/3;
    hp = hp%3;
    answer = answer +hp;
    return answer;
}