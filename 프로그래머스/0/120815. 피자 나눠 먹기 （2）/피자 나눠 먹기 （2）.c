#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i=1;
    while(1)
    {
        if((6*i)%n == 0)
        {
            answer = i;
            break;
        }
        i++;
    }
    return answer;
}