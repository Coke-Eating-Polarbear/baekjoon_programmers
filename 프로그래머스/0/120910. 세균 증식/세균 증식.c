#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    long answer = 0;
    int cal = n;
    for(int i=0;i<t;i++)
    {
        cal = cal * 2;
    }
    answer = cal;
    return answer;
}